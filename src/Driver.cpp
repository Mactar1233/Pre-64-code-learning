#include "main.h";
#include "Motors.hpp";
void setdrive(int left, int right){
    leftback = left;
    leftfront = left;
    rightback = right;
    rightfront = right;
}


void setdrivemotors() {
    int leftjoy = badstick.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int rightjoy = badstick.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y);
    setdrive(leftjoy, rightjoy); 
}


