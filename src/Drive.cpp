/*
 * Drive.cpp
 *
 *  Created on: Sep 5, 2015
 *      Author: Carleton
 */
#include "Drive.h"


Drive::Drive()
{
	rightMotorOne = new CANTalon(RIGHT_MOTOR_ONE);
	rightMotorTwo = new CANTalon(RIGHT_MOTOR_TWO);
	rightMotorThree = new CANTalon(RIGHT_MOTOR_THREE);

	encoder = new Encoder(ENCODER_PORT_ONE, ENCODER_PORT_TWO);
}

Drive::~Drive()
{

	delete rightMotorOne;
	delete rightMotorTwo;
	delete rightMotorThree;

	delete encoder;

	rightMotorOne =	NULL;
	rightMotorTwo =	NULL;
	rightMotorThree	= NULL;

	encoder = NULL;

}

void Drive::driveControl(float foward, float swerve)
{
	rightMotorOne->SetControlMode(CANSpeedController::kSpeed);

	rightMotorOne->Set(foward);
	rightMotorTwo->Set(foward);
	rightMotorThree->Set(foward);
}

int Drive::getEncoderValue()
{
	return encoder->Get();
}






