/*
 * SmartDashBoard.h
 *
 *  Created on: Oct 7, 2015
 *      Author: Admin
 */

#ifndef SRC_OPERATORINTERFACE_H_
#define SRC_OPERATORINTERFACE_H_

#include "WPIlib.h"
#include "Macros.h"

class OperatorInterface
{
public:

	OperatorInterface();
	~OperatorInterface();

	float joystickControlX();
	float joystickControlY();
	SmartDashboard* getDashboard();



private:
	SmartDashboard* dashboard;
	Joystick* joystick;

	float joystickX;
	float joystickY;

};


#endif /* SRC_OPERATORINTERFACE_H_ */
