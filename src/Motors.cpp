#include "main.h";

pros::Motor leftback(11,pros::E_MOTOR_GEARSET_18, false, pros:: E_MOTOR_ENCODER_COUNTS);
pros::Motor leftfront(10,pros::E_MOTOR_GEARSET_18, false, pros:: E_MOTOR_ENCODER_COUNTS);
pros::Motor rightback(20,pros::E_MOTOR_GEARSET_18, true, pros:: E_MOTOR_ENCODER_COUNTS);
pros::Motor rightfront(1,pros::E_MOTOR_GEARSET_18, true, pros:: E_MOTOR_ENCODER_COUNTS);
pros::Controller badstick(pros::E_CONTROLLER_MASTER);