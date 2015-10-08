/*
 * Manipulator.cpp
 *
 *  Created on: Sep 12, 2015
 *      Author: Carleton
 */

#include "Manipulator.h"

manip::manip()
{
	Launcher 	= new DoubleSolenoid	(LAUNCHER_PORT);

	/*compressor 	= new Compressor		(COMPRESSOR_PORT);

	ChooChoo 	= new Talon				(CHOO_CHOO_PORT);
	Rollin 		= new Talon				(ROLL_IN_PORT);*/

	joystick	= new Joystick		(JOYSTICK_PORT);
}

manip::~manip()
{
	delete Launcher;
	/*delete compressor;
	delete ChooChoo;
	delete Rollin;*/
	delete joystick;


	Launcher 	= NULL;
	/*compressor 	= NULL;
	ChooChoo 	= NULL;
	Rollin 		= NULL;*/
	joystick	=	NULL;


}

void manip::function()
{
	if(joystick->GetRawButton(1)==true)//error: " Invalid arguments ' Candidates are: bool GetRawButton(?) ' "
	{
		Launcher->Set(DoubleSolenoid::kForward);
	}
	else
	{
		Launcher->Set(DoubleSolenoid::kOff);
	}
}







