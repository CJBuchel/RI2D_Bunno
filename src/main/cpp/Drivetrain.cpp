#include "Drivetrain.h"

void Drivetrain::set(double left, double right) {
	_leftPower = left;
	_rightPower = right;

	// Left power
	_frontLeft.Set(_leftPower);
	_backLeft.Set(_leftPower);

	// Right power
	_frontRight.Set(_rightPower);
	_backRight.Set(_rightPower);
}