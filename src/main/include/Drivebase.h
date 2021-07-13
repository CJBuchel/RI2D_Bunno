#include <frc/Spark.h>

using namespace frc;

class Drivebase {
 public:


	// Left drive
	Spark topLeft{0};
	Spark bottomLeft{1};

	// Right drive
	Spark topRight{2};
	Spark bottomRight{3};

	void Set(double leftDrive, double rightDrive) {
		// Left set
		topLeft.Set(leftDrive);
		bottomLeft.Set(leftDrive);

		// Right set
		topRight.Set(rightDrive);
		bottomRight.Set(rightDrive);
	}


};