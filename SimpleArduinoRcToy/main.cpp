#include <Arduino.h>
#include "DcMotor.h"



const int lMotorPin1 = 8;
const int lMotorPin2 = 9;
const int rMotorPin1 = 10;
const int rMotorPin2 = 11;
char incomingByte;

DcMotor lMotor(lMotorPin1, lMotorPin2);
DcMotor rMotor(rMotorPin1, rMotorPin2);

int main(void) {
	init();

	setup();

	for (;;)
		loop();

	return 0;
}

void setup() {
	Serial.begin(9600);
}

void loop() {
	// If data has arrived
	if (Serial.available() > 0) {
		incomingByte = Serial.read();

		switch (incomingByte) {
		case '0':
			lMotor.stop();
			rMotor.stop();
			break;
		case '1':
			lMotor.cwTurn();
			rMotor.cwTurn();
			break;
		case '2':
			lMotor.acwTurn();
			rMotor.acwTurn();
			break;
		case '3':
			lMotor.cwTurn();
			rMotor.acwTurn();
			break;
		case '4':
			lMotor.acwTurn();
			rMotor.cwTurn();
			break;
		}
	}
}
