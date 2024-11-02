#pragma once

#include "api.h"

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');

#pragma once

#include "api.h"

inline pros::MotorGroup intake({10, 11});  // Negative port will reverse the motor

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');

#include "api.h"

inline pros::Motor tilter(16);  // Make this number negative if you want to reverse the motor

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');
