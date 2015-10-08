/*
 * Drive.cpp
 *
 *  Created on: Sep 5, 2015
 *      Author: Carleton
 */
#include "Drive.h"


drive::drive()
{

	frontLeft	= new CANTalon		(FRONT_LEFT_PORT);
	frontRight	= new CANTalon		(FRONT_RIGHT_PORT);
	backLeft	= new CANTalon		(BACK_LEFT_PORT);
	//backRight	= new CANTalon		(BACK_RIGHT_PORT);


	joystick	= new Joystick		(JOYSTICK_PORT);

	ChooEncoder = new Encoder		(CHOO_ENCODER_PORT);

	Foward_speed = 0;
	Swerve_speed = 0;

}

drive::~drive()
{

	delete frontLeft;
	delete frontRight;
	delete backLeft;
	//delete backRight;

	delete joystick;

	delete ChooEncoder;

	frontLeft	=	NULL;
	frontRight	=	NULL;
	backLeft	=	NULL;
	//backRight	=	NULL;

	joystick	=	NULL;

	ChooEncoder = NULL;

}

void drive::drive_control()
{
	Foward_speed = joystick->GetY();
	Swerve_speed = joystick->GetX();
	frontLeft->SetControlMode(CANSpeedController::kSpeed);
	frontLeft->Set((Foward_speed - Swerve_speed));
	frontRight->Set(Foward_speed + Swerve_speed);
	backLeft->Set(Foward_speed - Swerve_speed);
	//backRight->Set(Foward_speed + Swerve_speed);
}

int drive::getEncoderValue()
{
	return ChooEncoder->Get();
}






