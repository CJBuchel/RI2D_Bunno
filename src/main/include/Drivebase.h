#include <frc/Spark.h>
#include <math.h>

using namespace frc;

class Drivebase {
 public:

	// Left drive
	Spark topLeft{0};
	Spark bottomLeft{1};

	// Right drive
	Spark topRight{2};
	Spark bottomRight{3};

	double limit = 0.5;

	void Set(double yAxis, double zAxis) {
		double forwardPower = -yAxis;
		double steeringPower = -zAxis;

		// Steering conversion
		double leftPower = forwardPower + steeringPower; // 0.5 + -0.5 = 0
		double rightPower = forwardPower - steeringPower; // 0.5 - -0.5 = 1;


		// cubed increase
		leftPower = std::pow(leftPower, 3);
		rightPower = std::pow(rightPower, 3);

		// limit
		// leftPower *= limit;
		// rightPower *= limit;

		// Left set
		topLeft.Set(leftPower);
		bottomLeft.Set(leftPower);

		// Right set
		topRight.Set(-rightPower);
		bottomRight.Set(-rightPower);
	}


};