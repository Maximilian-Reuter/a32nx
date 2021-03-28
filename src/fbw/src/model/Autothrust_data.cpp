#include "Autothrust.h"
#include "Autothrust_private.h"

AutothrustModelClass::Parameters_Autothrust_T AutothrustModelClass::Autothrust_P = {
  {
    {
      0.0,
      0.0
    },

    {
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      false,
      0.0,
      false,
      false,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0
    },

    {
      false,
      false,
      false,
      false
    },

    {
      false,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      false,
      false,
      false,
      false,
      false,
      0.0,
      0.0,
      false,
      false,
      false,
      false,
      false
    },

    {
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      0.0,
      false,
      false,
      athr_thrust_limit_type_NONE,
      0.0,
      0.0,
      0.0,
      athr_status_DISENGAGED,
      athr_mode_NONE,
      athr_mode_message_NONE
    }
  },

  { 0.0, 1.0 },

  { 0.0, 1.0 },

  { 0.0, 1.0 },

  { 0.0, 5.0, 10.0, 15.0 },
  10.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  -20.0,
  0.0,
  -20.0,

  { -4.0, -4.0 },

  { 0.8, 1.0 },

  { 0.3, 0.6 },

  { 0.5, 0.5, 0.0, 0.0 },
  100.0,
  0.0,
  100.0,
  0.0,
  15.0,
  0.5,
  athr_status_ENGAGED_ACTIVE,
  0,
  0,
  0,
  0,
  0.0,
  0.4,
  0.4,
  -1.0,
  -1.0,
  2.0,
  1.0,
  1.0,
  0.0,
  2.0,
  1.0,
  0.0,

  { 71.8, 72.5, 73.1, 73.8, 74.4, 75.0, 75.7, 76.3, 76.9, 77.5, 78.1, 78.7, 79.3, 79.9, 80.5, 81.1, 81.6, 82.2, 82.8,
    83.4, 83.9, 84.5, 83.8, 83.0, 82.2, 81.4, 73.6, 74.3, 75.0, 75.6, 76.3, 76.9, 77.6, 78.2, 78.8, 79.5, 80.1, 80.7,
    81.3, 81.9, 82.5, 83.1, 83.7, 84.3, 84.9, 85.5, 85.7, 84.9, 84.2, 83.4, 82.6, 81.8, 75.5, 76.2, 76.9, 77.6, 78.2,
    78.9, 79.6, 80.2, 80.9, 81.5, 82.1, 82.8, 83.4, 84.0, 84.6, 85.3, 85.9, 86.5, 87.1, 86.9, 86.2, 85.4, 84.7, 83.9,
    83.1, 82.4, 76.8, 77.5, 78.2, 78.9, 79.6, 80.3, 80.9, 81.6, 82.2, 82.9, 83.5, 84.2, 84.8, 85.5, 86.1, 86.7, 87.3,
    87.9, 88.5, 88.0, 87.2, 86.5, 85.8, 85.1, 84.4, 83.7, 78.1, 78.8, 79.5, 80.2, 80.9, 81.6, 82.2, 82.9, 83.6, 84.2,
    84.9, 85.6, 86.2, 86.8, 87.5, 88.1, 88.7, 89.4, 88.6, 87.8, 87.1, 86.4, 85.7, 85.0, 84.4, 83.7, 78.9, 79.6, 80.3,
    81.0, 81.7, 82.4, 83.1, 83.8, 84.4, 85.1, 85.8, 86.4, 87.1, 87.7, 88.4, 89.0, 89.7, 89.3, 88.4, 87.7, 87.0, 86.3,
    85.6, 84.9, 84.3, 83.7, 80.1, 80.9, 81.6, 82.3, 83.0, 83.7, 84.4, 85.1, 85.8, 86.5, 87.1, 87.8, 88.5, 89.1, 89.8,
    90.4, 90.0, 89.1, 88.3, 87.5, 86.8, 86.1, 85.5, 84.8, 84.3, 83.7, 81.5, 82.2, 83.0, 83.7, 84.4, 85.1, 85.8, 86.5,
    87.2, 87.9, 88.6, 89.3, 90.0, 90.6, 91.3, 90.5, 89.6, 88.7, 87.9, 87.2, 86.5, 85.8, 85.1, 84.8, 84.3, 83.7, 81.6,
    82.4, 83.1, 83.8, 84.6, 85.3, 86.0, 86.7, 87.4, 88.1, 88.8, 89.5, 90.1, 90.8, 90.3, 89.5, 88.7, 87.9, 87.2, 86.5,
    85.8, 85.1, 85.1, 84.8, 84.3, 83.7, 83.0, 83.8, 84.5, 85.3, 86.0, 86.7, 87.5, 88.2, 88.9, 89.6, 90.3, 91.0, 91.1,
    90.2, 89.5, 88.8, 88.1, 87.5, 86.8, 86.1, 85.4, 85.1, 85.1, 84.8, 84.3, 83.7, 83.6, 84.4, 85.1, 85.9, 86.6, 87.3,
    88.1, 88.8, 89.5, 90.2, 90.0, 89.2, 88.5, 87.7, 87.0, 86.3, 85.6, 84.8, 86.8, 86.1, 85.4, 85.1, 85.1, 84.8, 84.3,
    83.7, 83.7, 84.5, 85.3, 86.0, 86.7, 87.5, 88.2, 88.9, 89.6, 90.0, 89.2, 88.4, 87.7, 86.9, 86.2, 85.5, 84.8, 83.9,
    86.8, 86.1, 85.4, 85.1, 85.1, 84.8, 84.3, 83.7, 83.3, 84.0, 84.8, 85.5, 86.3, 87.0, 87.7, 88.4, 89.1, 89.5, 88.7,
    87.9, 87.1, 86.4, 85.6, 84.9, 84.2, 83.3, 86.8, 86.1, 85.4, 85.1, 85.1, 84.8, 84.3, 83.7 },

  { -54.0, -50.0, -46.0, -42.0, -38.0, -34.0, -30.0, -26.0, -22.0, -18.0, -14.0, -10.0, -6.0, -2.0, 2.0, 6.0, 10.0, 14.0,
    18.0, 22.0, 26.0, 30.0, 34.0, 38.0, 42.0, 46.0 },

  { 2000.0, 5000.0, 8000.0, 12000.0, 15000.0, 17000.0, 20000.0, 24000.0, 27000.0, 31000.0, 35000.0, 39000.0, 41500.0 },

  { 13.0, 15.5, 17.8, 19.5, 22.9, 26.0, 28.0, 28.5, 28.5, 29.0, 13.0, 15.5, 17.8, 19.5, 22.9, 26.0, 28.0, 28.5, 26.0,
    28.0, 13.0, 15.5, 17.8, 19.5, 22.9, 25.0, 25.0, 28.5, 23.0, 22.9, 13.0, 15.5, 17.8, 19.5, 19.5, 21.0, 21.0, 21.0,
    19.0, 17.8, 13.0, 15.5, 17.0, 17.0, 17.0, 17.0, 17.0, 17.0, 14.0, 13.0, 13.0, 14.0, 14.0, 14.0, 14.0, 14.0, 14.0,
    14.0, 9.0, 8.0, -2.0, 0.0, 0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -5.0 },

  { -2000.0, 0.0, 2000.0, 4000.0, 6000.0, 8000.0, 10000.0, 12000.0, 14000.0, 16000.0 },

  { 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 80.0 },

  { 65.5, 82.5, 80.3, 100.0 },

  { 5.0, 27.0 },

  { -50.0, 60.0 },

  { 71.4, 72.0, 72.7, 73.3, 73.9, 74.5, 75.2, 75.8, 76.4, 77.0, 77.6, 78.2, 78.8, 79.4, 80.0, 80.5, 81.1, 81.7, 82.3,
    82.8, 83.4, 83.9, 84.5, 83.7, 82.9, 82.2, 74.7, 75.4, 76.0, 76.7, 77.4, 78.0, 78.7, 79.3, 79.9, 80.6, 81.2, 81.8,
    82.4, 83.1, 83.7, 84.3, 84.9, 85.5, 86.1, 86.7, 87.2, 86.8, 86.0, 85.2, 84.5, 83.7, 77.2, 77.9, 78.6, 79.3, 79.9,
    80.6, 81.3, 81.9, 82.6, 83.3, 83.9, 84.6, 85.2, 85.8, 86.5, 87.1, 87.7, 88.3, 88.9, 88.8, 88.0, 87.2, 86.4, 85.7,
    85.0, 84.3, 79.9, 80.6, 81.3, 82.0, 82.7, 83.4, 84.1, 84.8, 85.5, 86.2, 86.8, 87.5, 88.2, 88.8, 89.5, 90.1, 90.8,
    91.1, 90.1, 89.3, 88.5, 87.7, 86.9, 86.3, 85.9, 84.3, 83.1, 83.9, 84.6, 85.4, 86.1, 86.8, 87.5, 88.3, 89.0, 89.7,
    90.4, 91.1, 91.8, 92.4, 93.1, 93.8, 93.0, 92.0, 91.0, 90.2, 89.4, 88.6, 87.8, 86.3, 85.9, 84.3, 84.5, 85.2, 86.0,
    86.8, 87.5, 88.2, 89.0, 89.7, 90.4, 91.1, 91.9, 92.6, 93.3, 94.0, 94.7, 94.2, 93.1, 92.1, 91.1, 90.3, 89.5, 88.7,
    88.0, 86.3, 85.9, 84.3, 86.0, 86.8, 87.6, 88.3, 89.1, 89.8, 90.6, 91.3, 92.1, 92.8, 93.5, 94.2, 94.9, 95.7, 94.8,
    93.8, 92.8, 91.8, 90.8, 90.0, 89.2, 88.4, 88.0, 86.3, 85.9, 84.3, 85.7, 86.5, 87.3, 88.1, 88.8, 89.6, 90.3, 91.1,
    91.8, 92.5, 93.2, 94.0, 94.7, 94.3, 93.3, 92.2, 91.2, 90.3, 89.3, 88.5, 87.7, 88.4, 88.0, 86.3, 85.9, 84.3, 85.3,
    86.1, 86.8, 87.6, 88.3, 89.1, 89.8, 90.6, 91.3, 92.0, 92.7, 93.4, 92.8, 91.8, 90.9, 89.9, 88.9, 88.0, 87.0, 86.2,
    87.7, 88.4, 88.0, 86.3, 85.9, 84.3, 84.3, 85.0, 85.8, 86.5, 87.3, 88.0, 88.8, 89.5, 90.2, 90.9, 91.6, 91.5, 90.6,
    89.7, 88.8, 87.9, 87.1, 86.2, 85.4, 86.2, 87.7, 88.4, 88.0, 86.3, 85.9, 84.3, 85.5, 86.3, 87.0, 87.8, 88.5, 89.3,
    90.0, 90.8, 91.5, 92.2, 91.5, 90.7, 89.8, 88.9, 88.1, 87.4, 86.6, 85.9, 85.4, 86.2, 87.7, 88.4, 88.0, 86.3, 85.9,
    84.3, 85.3, 86.0, 86.8, 87.6, 88.3, 89.1, 89.8, 90.5, 90.9, 90.0, 89.1, 88.3, 87.5, 86.7, 86.0, 85.2, 84.4, 85.9,
    85.4, 86.2, 87.7, 88.4, 88.0, 86.3, 85.9, 84.3, 84.3, 85.0, 85.8, 86.5, 87.3, 88.0, 88.7, 89.5, 90.2, 89.7, 88.9,
    88.0, 87.3, 86.5, 85.8, 85.0, 84.2, 85.9, 85.4, 86.2, 87.7, 88.4, 88.0, 86.3, 85.9, 84.3 },

  { -54.0, -50.0, -46.0, -42.0, -38.0, -34.0, -30.0, -26.0, -22.0, -18.0, -14.0, -10.0, -6.0, -2.0, 2.0, 6.0, 10.0, 14.0,
    18.0, 22.0, 26.0, 30.0, 34.0, 38.0, 42.0, 46.0 },

  { -1000.0, 3000.0, 7000.0, 11000.0, 15000.0, 17000.0, 20000.0, 22000.0, 25000.0, 27000.0, 31000.0, 35000.0, 39000.0 },

  { 70.8, 71.6, 73.2, 74.7, 75.5, 76.3, 77.0, 77.7, 78.5, 79.2, 79.5, 79.9, 80.4, 80.6, 80.9, 81.2, 81.5, 81.8, 82.1,
    82.3, 82.6, 82.9, 83.2, 83.4, 83.7, 84.0, 84.3, 84.5, 84.8, 85.1, 85.3, 85.6, 85.9, 85.5, 85.2, 84.7, 71.9, 72.7,
    74.3, 75.9, 76.7, 77.4, 78.2, 78.9, 79.7, 80.4, 80.7, 81.2, 81.6, 81.9, 82.2, 82.5, 82.7, 83.0, 83.3, 83.6, 83.9,
    84.2, 84.4, 84.7, 85.0, 85.3, 85.6, 85.8, 86.1, 86.4, 86.7, 86.9, 86.6, 86.2, 85.9, 85.5, 72.9, 73.8, 75.4, 77.0,
    77.8, 78.6, 79.3, 80.1, 80.9, 81.6, 81.9, 82.4, 82.8, 83.1, 83.4, 83.7, 84.0, 84.3, 84.6, 84.8, 85.1, 85.4, 85.7,
    86.0, 86.3, 86.6, 86.8, 87.1, 87.4, 87.7, 87.9, 87.6, 87.3, 87.0, 86.7, 86.2, 73.3, 74.1, 75.7, 77.4, 78.1, 78.9,
    79.7, 80.5, 81.2, 82.0, 82.3, 82.7, 83.2, 83.5, 83.8, 84.1, 84.4, 84.6, 84.9, 85.2, 85.5, 85.8, 86.1, 86.4, 86.7,
    86.9, 87.2, 87.5, 87.8, 88.1, 88.0, 87.7, 87.4, 87.1, 86.7, 86.2, 73.6, 74.4, 76.1, 77.7, 78.5, 79.3, 80.1, 80.8,
    81.6, 82.3, 82.7, 83.1, 83.5, 83.8, 84.1, 84.4, 84.7, 85.0, 85.3, 85.6, 85.9, 86.2, 86.5, 86.8, 87.0, 87.3, 87.6,
    87.9, 88.2, 88.5, 88.1, 87.8, 87.5, 87.1, 86.8, 86.2, 74.5, 75.3, 77.0, 78.6, 79.4, 80.2, 81.0, 81.8, 82.6, 83.3,
    83.6, 84.1, 84.6, 84.9, 85.2, 85.5, 85.7, 86.0, 86.3, 86.6, 86.9, 87.2, 87.5, 87.8, 88.1, 88.4, 88.7, 89.0, 89.2,
    88.9, 88.6, 88.2, 87.9, 87.6, 86.8, 86.2, 75.4, 76.3, 77.9, 79.6, 80.4, 81.2, 82.0, 82.8, 83.6, 84.4, 84.7, 85.1,
    85.6, 85.9, 86.2, 86.5, 86.8, 87.1, 87.4, 87.7, 88.0, 88.3, 88.6, 88.9, 89.2, 89.5, 89.8, 89.5, 89.2, 88.8, 88.5,
    88.1, 87.8, 87.6, 86.8, 86.2, 76.1, 77.0, 78.7, 80.3, 81.1, 82.0, 82.8, 83.6, 84.4, 85.1, 85.4, 85.9, 86.4, 86.7,
    87.0, 87.3, 87.6, 87.9, 88.2, 88.5, 88.8, 89.1, 89.4, 89.7, 90.0, 89.8, 89.5, 89.1, 88.7, 88.4, 88.1, 87.7, 87.8,
    87.6, 86.8, 86.2, 77.3, 78.2, 79.9, 81.6, 82.4, 83.3, 84.1, 84.9, 85.7, 86.5, 86.8, 87.3, 87.7, 88.0, 88.4, 88.7,
    89.0, 89.3, 89.6, 89.9, 90.2, 90.5, 90.8, 90.8, 90.4, 90.0, 89.6, 89.3, 88.9, 88.6, 88.3, 87.7, 87.8, 87.6, 86.8,
    86.2, 78.5, 79.4, 81.2, 82.9, 83.7, 84.6, 85.4, 86.2, 87.0, 87.9, 88.2, 88.7, 89.1, 89.4, 89.8, 90.1, 90.4, 90.7,
    91.0, 91.3, 91.6, 91.6, 91.3, 90.9, 90.5, 90.2, 89.8, 89.4, 89.1, 88.7, 88.3, 87.7, 87.8, 87.6, 86.8, 86.2, 79.8,
    80.7, 82.5, 84.2, 85.1, 86.0, 86.8, 87.6, 88.5, 89.3, 89.6, 90.1, 90.6, 90.9, 91.2, 91.6, 91.9, 92.2, 92.5, 92.5,
    92.1, 91.7, 91.3, 91.0, 90.6, 90.3, 89.9, 89.5, 89.2, 88.7, 88.3, 87.7, 87.8, 87.6, 86.8, 86.2, 81.1, 82.1, 83.9,
    85.7, 86.5, 87.4, 88.3, 89.1, 89.9, 90.8, 91.1, 91.6, 92.1, 92.4, 92.8, 93.1, 93.4, 93.4, 92.9, 92.5, 92.1, 91.7,
    91.4, 91.0, 90.7, 90.3, 89.9, 89.6, 89.2, 88.7, 88.3, 87.7, 87.8, 87.6, 86.8, 86.2, 81.8, 82.8, 84.6, 86.4, 87.3,
    88.1, 89.0, 89.8, 90.7, 91.5, 91.9, 92.4, 92.9, 93.2, 93.5, 93.9, 93.9, 93.4, 93.0, 92.5, 92.1, 91.8, 91.4, 91.1,
    90.7, 90.4, 90.0, 89.6, 89.2, 88.7, 88.3, 87.7, 87.8, 87.6, 86.8, 86.2, 82.7, 83.6, 85.4, 87.2, 88.1, 89.0, 89.9,
    90.7, 91.6, 92.4, 92.8, 93.3, 93.8, 94.1, 94.5, 94.5, 94.2, 93.8, 93.5, 93.1, 92.7, 92.3, 91.9, 91.6, 91.2, 90.9,
    90.0, 89.6, 89.2, 88.7, 88.3, 87.7, 87.8, 87.6, 86.8, 86.2, 83.0, 83.9, 85.7, 87.5, 88.4, 89.3, 90.2, 91.1, 91.9,
    92.8, 93.1, 93.6, 94.1, 94.5, 94.8, 94.6, 94.2, 93.7, 93.3, 92.9, 92.5, 92.1, 91.7, 91.4, 91.1, 90.9, 90.0, 89.6,
    89.2, 88.7, 88.3, 87.7, 87.8, 87.6, 86.8, 86.2, 83.2, 84.1, 86.0, 87.8, 88.7, 89.6, 90.4, 91.3, 92.2, 93.0, 93.4,
    93.9, 94.4, 94.7, 94.7, 94.3, 93.9, 93.4, 92.9, 92.6, 92.2, 91.8, 91.5, 91.1, 91.1, 90.9, 90.0, 89.6, 89.2, 88.7,
    88.3, 87.7, 87.8, 87.6, 86.8, 86.2, 83.0, 83.9, 85.8, 87.6, 88.5, 89.4, 90.2, 91.1, 92.0, 92.8, 93.2, 93.7, 94.2,
    94.5, 94.1, 93.7, 93.2, 92.7, 92.3, 91.9, 91.5, 91.2, 90.8, 91.1, 91.1, 90.9, 90.0, 89.6, 89.2, 88.7, 88.3, 87.7,
    87.8, 87.6, 86.8, 86.2, 83.1, 84.0, 85.8, 87.6, 88.5, 89.4, 90.3, 91.1, 92.0, 92.9, 93.2, 93.7, 94.2, 94.3, 93.9,
    93.5, 93.0, 92.6, 92.2, 91.8, 91.4, 91.0, 90.8, 91.1, 91.1, 90.9, 90.0, 89.6, 89.2, 88.7, 88.3, 87.7, 87.8, 87.6,
    86.8, 86.2, 83.3, 84.3, 86.1, 87.9, 88.8, 89.7, 90.5, 91.4, 92.3, 93.1, 93.5, 94.0, 94.5, 94.2, 93.9, 93.4, 93.0,
    92.5, 92.1, 91.7, 91.3, 91.0, 90.8, 91.1, 91.1, 90.9, 90.0, 89.6, 89.2, 88.7, 88.3, 87.7, 87.8, 87.6, 86.8, 86.2,
    83.8, 84.7, 86.5, 88.4, 89.2, 90.1, 91.0, 91.9, 92.7, 93.6, 93.9, 94.4, 94.3, 93.8, 93.2, 92.7, 92.2, 91.7, 91.3,
    90.9, 91.3, 91.0, 90.8, 91.1, 91.1, 90.9, 90.0, 89.6, 89.2, 88.7, 88.3, 87.7, 87.8, 87.6, 86.8, 86.2, 84.1, 85.1,
    86.9, 88.7, 89.6, 90.5, 91.4, 92.2, 93.1, 94.0, 94.3, 94.8, 94.2, 93.7, 93.1, 92.6, 92.1, 91.7, 91.3, 90.9, 91.3,
    91.0, 90.8, 91.1, 91.1, 90.9, 90.0, 89.6, 89.2, 88.7, 88.3, 87.7, 87.8, 87.6, 86.8, 86.2 },

  { -55.0, -50.0, -40.0, -30.0, -25.0, -20.0, -15.0, -10.0, -5.0, 0.0, 2.0, 5.0, 8.0, 10.0, 12.0, 14.0, 16.0, 18.0, 20.0,
    22.0, 24.0, 26.0, 28.0, 30.0, 32.0, 34.0, 36.0, 38.0, 40.0, 42.0, 44.0, 46.0, 48.0, 50.0, 52.0, 55.0 },

  { -2000.0, -1000.0, 0.0, 500.0, 1000.0, 2000.0, 3000.0, 4000.0, 5000.0, 6000.0, 7000.0, 8000.0, 9000.0, 10000.0,
    11000.0, 12000.0, 13000.0, 14000.0, 15000.0, 16000.0, 16600.0 },
  3.0,
  1.0,
  0.017453292519943295,
  0.1019367991845056,
  57.295779513082323,
  0.0,
  2.0,
  0.0,
  3.0,
  -3.0,
  5.0,
  -5.0,
  5.0,
  -5.0,

  { 25U, 12U },

  { 9U, 6U },

  { 1U, 1U },

  { 25U, 12U },

  { 35U, 20U },

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 }
};
