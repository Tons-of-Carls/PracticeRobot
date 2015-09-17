/*
 * Manipulator.cpp
 *
 *  Created on: Sep 12, 2015
 *      Author: Carleton
 */

#include "Manipulator.h"

manip::manip()
{
	Launcher = new DoubleSolenoid(1);

	compressor = new Compressor(2);

	ChooChoo = new Victor(3);
	Rollin = new Victor(4);

	ChooEncoder = new Encoder(5);
}

manip::~manip()
{
	delete Launcher;
	delete compressor;
	delete ChooChoo;
	delete Rollin;
	delete ChooEncoder;

	Launcher = NULL;
	compressor = NULL;
	ChooChoo = NULL;
	Rollin = NULL;
	ChooEncoder = NULL;
}

void manip::ready()
{
	Rollin->Set(.7);
}







