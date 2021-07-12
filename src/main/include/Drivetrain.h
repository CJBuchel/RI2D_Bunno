#include "frcHeaders.h"

/**
 * Takes in 4 motor controllers
 */
class Drivetrain {
public:
	Drivetrain(frc::Spark &frontLeft, frc::Spark &backLeft, frc::Spark &frontRight, frc::Spark &backRight) :
		_frontLeft(frontLeft),
		_backLeft(backLeft),
		_frontRight(frontRight),
		_backRight(backRight) {}
	
	void set(double left, double right);
private:
	double _leftPower;
	double _rightPower;

	frc::Spark &_frontLeft, &_backLeft, &_frontRight, &_backRight;
};