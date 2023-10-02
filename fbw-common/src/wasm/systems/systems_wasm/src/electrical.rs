#[cfg(not(target_arch = "wasm32"))]
use crate::msfs::legacy::execute_calculator_code;
#[cfg(target_arch = "wasm32")]
use msfs::legacy::execute_calculator_code;

use crate::{ExecuteOn, MsfsAspectBuilder, Variable};
use std::error::Error;
use systems::shared::{to_bool, ElectricalBusType};

pub(super) fn electrical_buses<const N: usize>(
    buses: [(ElectricalBusType, usize); N],
) -> impl FnOnce(&mut MsfsAspectBuilder) -> Result<(), Box<dyn Error>> {
    move |builder: &mut MsfsAspectBuilder| {
        for bus in buses {
            const INFINITELY_POWERED_BUS_IDENTIFIER: usize = 1;
            let toggle_code = format!(
                "{} {} (>K:2:ELECTRICAL_BUS_TO_BUS_CONNECTION_TOGGLE)",
                INFINITELY_POWERED_BUS_IDENTIFIER, bus.1
            );
            let variable = Variable::named(&format!("ELEC_{}_BUS_IS_POWERED", bus.0));
            // MSFS' starting state has all buses connected.
            builder.init_variable(variable.clone(), 1.);
            builder.on_change(
                ExecuteOn::PostTick,
                vec![variable],
                Box::new(move |_, _| {
                    execute_calculator_code::<()>(&toggle_code);
                }),
            );
        }

        Ok(())
    }
}

/// The default MSFS APU is still used during engine start.
/// At this moment, the engines cannot be started without it.
/// Once pneumatics and the engine model are completed, this
/// function can probably be removed.
pub(super) fn auxiliary_power_unit(
    is_available_variable: Variable,
    apu_fuel_valve_number: u8,
    apu_fuel_pump_number: u8,
    asu_fuel_valve_number: u8,
    asu_fuel_pump_number: u8,
) -> impl FnOnce(&mut MsfsAspectBuilder) -> Result<(), Box<dyn Error>> {
    move |builder: &mut MsfsAspectBuilder| {
        builder.on_change(
            ExecuteOn::PostTick,
            vec![
                is_available_variable,
                Variable::aircraft("APU SWITCH", "Bool", 0),
                Variable::aircraft("BLEED AIR APU", "Bool", 0),
                Variable::named("ASU_TURNED_ON"),
                Variable::named("APU_BLEED_AIR_VALVE_OPEN"),
            ],
            Box::new(move |_, values| {
                let is_available = to_bool(values[0]);
                let msfs_apu_is_on = to_bool(values[1]);
                let msfs_apu_bleed_on = to_bool(values[2]);
                let asu_turned_on = to_bool(values[3]);
                let apu_bleed_valve_open = to_bool(values[4]);

                if is_available {
                    set_fuel_valve_and_pump(apu_fuel_valve_number, apu_fuel_pump_number, true);
                } else {
                    set_fuel_valve_and_pump(apu_fuel_valve_number, apu_fuel_pump_number, false);
                }

              /*   if asu_turned_on {

                } else {

                } */

                if (is_available || asu_turned_on) && !msfs_apu_is_on {
                    println!(
                        "Starting MSFS APU with asu:{} apu_available:{} msfs_apu:{} msfs apu raw:{}",
                        asu_turned_on, is_available, msfs_apu_is_on,values[1]
                    );
                    set_fuel_valve_and_pump(asu_fuel_valve_number, asu_fuel_pump_number, true);
                    start_apu();
                } else if !is_available && !asu_turned_on && msfs_apu_is_on {
                    println!(
                        "Stopping MSFS APU with asu:{} apu_available:{} msfs_apu:{} msfs apu raw:{}",
                        asu_turned_on, is_available, msfs_apu_is_on,values[1]
                    );
                    set_fuel_valve_and_pump(asu_fuel_valve_number, asu_fuel_pump_number, false);
                    stop_apu();
                }

                if ((is_available && apu_bleed_valve_open) || asu_turned_on) && !msfs_apu_bleed_on {
                    supply_bleed(true);
                } else if (!is_available || !apu_bleed_valve_open)
                    && !asu_turned_on
                    && msfs_apu_bleed_on
                {
                    supply_bleed(false);
                }
            }),
        );

        Ok(())
    }
}

fn set_fuel_valve_and_pump(fuel_valve_number: u8, fuel_pump_number: u8, on: bool) {
    let actions = if on { ("OPEN", "ON") } else { ("CLOSE", "OFF") };
    execute_calculator_code::<()>(&format!(
        "{} (>K:FUELSYSTEM_VALVE_{})",
        fuel_valve_number, actions.0
    ));
    execute_calculator_code::<()>(&format!(
        "{} (>K:FUELSYSTEM_PUMP_{})",
        fuel_pump_number, actions.1
    ));
}

fn start_apu() {
    // In the systems.cfg, the `apu_pct_rpm_per_second` setting
    // is set to 1000, meaning the MSFS APU starts in 1 millisecond.
    execute_calculator_code::<()>("1 (>K:APU_STARTER, Number)");
}

fn stop_apu() {
    execute_calculator_code::<()>("1 (>K:APU_OFF_SWITCH, Number)");
}

fn supply_bleed(on: bool) {
    let action = if on { "1" } else { "0" };
    execute_calculator_code::<()>(&format!("{} (>K:APU_BLEED_AIR_SOURCE_SET, Bool)", action));
}
