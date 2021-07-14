#include <frc/Talon.h>


using namespace frc;

class Intake {
 public:

	Talon spinner{4};
	Talon flooper{5};


	double spinLimit = 0.1;

	void Set(int spinButton = 0, int flipUp = 0, int flipDown = 0, double flipPower = 0) {
		double flooperOutputPower = flipPower > 0 ? flipPower : 0;

		if (spinButton) { // Spinner
			spinner.Set(spinLimit);
		} else {
			spinner.Set(0);
		}

		if (flipUp) { // flooper
			flooper.Set(flooperOutputPower);
		} else if (flipDown) {
			flooper.Set(flooperOutputPower);
		} else {
			flooper.Set(0);
		}

	}

};