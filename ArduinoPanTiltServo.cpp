// Do not remove the include below
#include "ArduinoPanTiltServo.h"
#include <Servo.h>

ArduinoPanTiltServo::ArduinoPanTiltServo() {
}

void ArduinoPanTiltServo::init(int panServoPin,int tiltServoPin,int panPos, int tiltPos) {
	panServo.attach(panServoPin);
	tiltServo.attach(tiltServoPin);
	panServo.write(panPos);
	tiltServo.write(tiltPos);
}

void ArduinoPanTiltServo::move(int panPos, int tiltPos) {
	panServo.write(panPos);
	tiltServo.write(tiltPos);
}

void ArduinoPanTiltServo::pan(int panPos) {
	panServo.write(panPos);
}

int ArduinoPanTiltServo::pan() {
	panServo.read();
}

void ArduinoPanTiltServo::tilt(int tiltPos) {
	tiltServo.write(tiltPos);
}

int ArduinoPanTiltServo::tilt() {
	tiltServo.read();
}

