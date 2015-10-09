/*
 * Manipulator.cpp
 *
 *  Created on: Sep 12, 2015
 *      Author: Carleton
 */

#include "Manipulator.h"

Manipulator::Manipulator()
{
	Launcher = new DoubleSolenoid(SHIFTER_PORT_ONE, SHIFTER_PORT_TWO);
	compressor = new Compressor(COMPRESSOR_PORT);

	compressor->SetClosedLoopControl(true);
}

Manipulator::~Manipulator()
{
	delete Launcher;
	delete compressor;



	Launcher = NULL;
	compressor = NULL;

}

void Manipulator::shift(bool on)
{
	compressor->Start();

	if(on == true)
	{
		Launcher->Set(DoubleSolenoid::kForward);
	}
	else
	{
		Launcher->Set(DoubleSolenoid::kOff);
	}
}







