#include "DcMotor.h"
#include <Arduino.h>
/*
 * DcMotor.cpp
 *
 *  Created on: 30 Sep 2014
 *      Author: will
 */

DcMotor::DcMotor(int pin1, int pin2)
	:pin1(pin1), pin2(pin2)
{
	pinMode(pin1, OUTPUT);
	pinMode(pin2, OUTPUT);
}

void DcMotor::cwTurn() {
	digitalWrite(pin1, HIGH);
	digitalWrite(pin2, LOW);
}

void DcMotor::acwTurn() {
	digitalWrite(pin1, LOW);
	digitalWrite(pin2, HIGH);
}

void DcMotor::stop() {
	digitalWrite(pin1, LOW);
	digitalWrite(pin2, LOW);
}


