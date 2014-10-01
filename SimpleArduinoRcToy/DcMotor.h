/*
 * DcMotor.h
 *
 *  Created on: 30 Sep 2014
 *      Author: will
 */

class DcMotor {
public:
	DcMotor(int pin1, int pin2);
	void cwTurn();
	void acwTurn();
	void stop();
private:
	int pin1;
	int pin2;
};
