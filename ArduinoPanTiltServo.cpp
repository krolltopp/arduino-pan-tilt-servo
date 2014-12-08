// Do not remove the include below
#include "ArduinoPanTiltServo.h"

ArduinoPanTiltServo::ArduinoPanTiltServo(int panServoPin, int tiltServoPin) {
	panServo.attach(panServoPin);
	tiltServo.attach(tiltServoPin);
}

void ArduinoPanTiltServo::init(int panPos, int tiltPos) {
	panServo.write(panPos);
	tiltServo.write(tiltPos);
}

void ArduinoPanTiltServo::move(int panPos, int tiltPos) {
	panServo.write(panPos);
	tiltServo.write(tiltPos);
}
