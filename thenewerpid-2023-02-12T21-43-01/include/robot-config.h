using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern inertial Inertial2;
extern motor_group LeftMotor;
extern motor_group RightMotor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );