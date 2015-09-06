/*
 * Drive.h
 *
 *  Created on: Sep 5, 2015
 *      Author: Carleton
 */
#include "WPILib.h"

#ifndef SRC_DRIVE_H_
#define SRC_DRIVE_H_


class drive
{

public:
	drive();
	~drive();



	void foward();
	void swerve();

private:

	Talon* frontLeft;
	Talon* frontRight;
	Talon* backLeft;
	Talon* backRight;

	Joystick* joystick;

	float Foward_speed;
	float Swerve_speed;

};


#endif /* SRC_DRIVE_H_ */
