/*
 * Drive.h
 *
 *  Created on: Sep 5, 2015
 *      Author: Carleton
 */
#include "WPIlib.h"
#include "Macros.h"
#include "OperatorInterface.h"

#ifndef SRC_DRIVE_H_
#define SRC_DRIVE_H_


class Drive
{

public:
	Drive();
	~Drive();

	void driveControl(float forward, float swerve);

	int getEncoderValue();

private:

	CANTalon* rightMotorOne;
	CANTalon* rightMotorTwo;
	CANTalon* rightMotorThree;

	Encoder* encoder;

};


#endif /* SRC_DRIVE_H_ */
