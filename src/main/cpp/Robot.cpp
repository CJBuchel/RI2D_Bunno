#include "Robot.h"

#include <iostream>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/Joystick.h>

#include "Drivebase.h"
#include "Intake.h"


using namespace frc;
using namespace std;

Drivebase drive; // drivebase
Intake intake;
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
void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {

	// Drive code
	drive.Set(joy.GetY(), joy.GetZ());

	// Intake
	intake.Set( joy.GetRawButtonPressed(1), // Trigger (spin)
							joy.GetRawButtonPressed(4), // flipDown (button 4)
							joy.GetRawButtonPressed(6), // flipUp (button 6)
							joy.GetThrottle()); // Throttle (Power of the flipping motor)
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