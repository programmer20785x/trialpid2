#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
inertial Inertial2 = inertial(PORT2);
motor LeftMotorMotorA = motor(PORT14, ratio18_1, false);
motor LeftMotorMotorB = motor(PORT15, ratio18_1, false);
motor_group LeftMotor = motor_group(LeftMotorMotorA, LeftMotorMotorB);
motor RightMotorMotorA = motor(PORT19, ratio18_1, false);
motor RightMotorMotorB = motor(PORT20, ratio18_1, false);
motor_group RightMotor = motor_group(RightMotorMotorA, RightMotorMotorB);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}