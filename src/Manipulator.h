/*
 * Manipulator.h
 *
 *  Created on: Sep 12, 2015
 *      Author: Carleton
 */

#ifndef SRC_MANIPULATOR_H_
#define SRC_MANIPULATOR_H_

#include "WPIlib.h"
#include "Macros.h"

class manip
{

public:

	manip();
	~manip();


	//a switch with all the stages to resetting the launching mechanism and firing a ball
	void function();


private:
	DoubleSolenoid* 	Launcher;

	Joystick* joystick;

	/*Compressor* 		compressor;

	Talon* 				ChooChoo;
	Talon* 				Rollin;*/



};



#endif /* SRC_MANIPULATOR_H_ */
