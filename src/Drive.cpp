/*
 * Drive.cpp
 *
 *  Created on: Sep 5, 2015
 *      Author: Carleton
 */
#include "Drive.h"


drive::drive()
{

	frontLeft = new Talon*(1);
	frontRight = new Talon*(2);
	backLeft = new Talon*(3);
	backRight = new Talon*(4);

	joystick = new Joystick*(5);

	Foward_speed = joystick->GetY();
	Swerve_speed = joystick->GetX();
}

drive::~drive()
{

	delete frontLeft;
	delete frontRight;
	delete backLeft;
	delete backRight;

	delete joystick;

	Foward_speed = NULL;
	Swerve_speed = NULL;

}

void drive::foward()
{
	frontLeft->Set(Foward_speed);
	frontRight->Set(Foward_speed);
	backLeft->Set(Foward_speed);
	backRight->Set(Foward_speed);
}

void drive::swerve()
{
	frontLeft->Set(Swerve_speed);
	frontRight->Set(Swerve_speed);
	backLeft->Set(Swerve_speed);
	backRight->Set(Swerve_speed);
}






