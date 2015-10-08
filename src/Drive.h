/*
 * Drive.h
 *
 *  Created on: Sep 5, 2015
 *      Author: Carleton
 */
#include "WPIlib.h"
#include "Macros.h"


#ifndef SRC_DRIVE_H_
#define SRC_DRIVE_H_


class drive
{

public:
	drive();
	~drive();



	void drive_control();

	int getEncoderValue();

private:

	CANTalon* frontLeft;
	CANTalon* frontRight;
	CANTalon* backLeft;
	//CANTalon* backRight;

	Joystick* joystick;

	float Foward_speed;
	float Swerve_speed;



	Encoder* 			ChooEncoder;

};


#endif /* SRC_DRIVE_H_ */
