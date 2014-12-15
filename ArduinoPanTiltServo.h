// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef ArduinoPanTiltServo_H
#define ArduinoPanTiltServo_H
#include "Arduino.h"
#include <Servo.h>

class ArduinoPanTiltServo {
public:
	ArduinoPanTiltServo();
	void init(int panServoPin,int tiltServoPin,int panPos,int tiltPos);
	void move(int panPos,int tiltPos);
	void pan(int panPos);
	void tilt(int tiltPos);
	int pan();
	int tilt();

private:
	Servo panServo, tiltServo;
};


#endif
