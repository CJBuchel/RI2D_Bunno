#include "Robot.h"

#include <iostream>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/Joystick.h>

#include "Drivebase.h"


Drivebase drive;
Joystick joy(0);

/**
 * When robot boots up, it runs this function once
 */
void Robot::RobotInit() {}

/**
 * Regardless of which mode the robot is in (teleop/auto/test/disabled) this code runs continuously
 */
void Robot::RobotPeriodic() {}
/**
 * When auto mode is selected, auto init function runs once.
 * Periodic runs continuously
*/
void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic() {}

/**
 * Teleop version of autonomous. Runs once in this mode, then continuously
 */
void Robot::TeleopInit() {
}

void Robot::TeleopPeriodic() {
	double forwardPower = -joy.GetY();
	double steeringPower = -joy.GetZ();

	double left = forwardPower + steeringPower; // 0.5 + -0.5 = 0
	double right = forwardPower - steeringPower; // 0.5 - -0.5 = 1

	std::cout << "Left Power: " << left << std::endl;
	std::cout << "Right power: " << right << std::endl;
}

/**
 * Disabled version of teleop
 * When robot goes in disabled, maybe you want to delete certain classes to free up memory
 */
void Robot::DisabledInit() {}
void Robot::DisabledPeriodic() {}

/**
 * Test function, runs code in test mode.
 * Might want to build a bunch of test code to drive and test encoders
 */
void Robot::TestInit() {}
void Robot::TestPeriodic() {}