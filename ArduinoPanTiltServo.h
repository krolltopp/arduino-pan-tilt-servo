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
	ArduinoPanTiltServo(int panServoPin,int tiltServoPin);
	void init(int panPos,int tiltPos);
	void move(int panPos,int tiltPos);

private:
	Servo panServo, tiltServo;
};


#endif
