/*
 * IO.cpp
 *
 *  Created on: Oct 7, 2015
 *      Author: Admin
 */

#include "OperatorInterface.h"

OperatorInterface::OperatorInterface()
{
	dashboard->init();
	joystick = new Joystick(JOYSTICK_PORT);

	joystickX = 0;
	joystickY = 0;
}

OperatorInterface::~OperatorInterface()
{
	delete joystick;

	joystick = NULL;
}

float OperatorInterface::joystickControlX()
{
	joystickX = joystick->GetX();

	if(joystickX >= DEADZONE || joystickX <= -DEADZONE)
	{
		return joystickX;
	}

	return 0;
}

float OperatorInterface::joystickControlY()
{
	joystickY = joystick->GetY();

	if(joystickY >= DEADZONE || joystickY <= DEADZONE)
	{
		return joystickY;
	}

	return 0;
}

SmartDashboard* OperatorInterface::getDashboard()
{
	return dashboard;
}




