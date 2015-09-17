/*
 * Manipulator.h
 *
 *  Created on: Sep 12, 2015
 *      Author: Carleton
 */

#ifndef SRC_MANIPULATOR_H_
#define SRC_MANIPULATOR_H_

#include "WPILib.h"

class manip
{

public:

	manip();
	~manip();



	void ready();//load in a ball
	void aim();//Find a use for this function
	void fire();//launch the ball
	void reset();//choochoo reset mechanism



private:
	DoubleSolenoid* Launcher;

	Compressor* compressor;

	Victor* ChooChoo;
	Victor* Rollin;

	Encoder* ChooEncoder;

};



#endif /* SRC_MANIPULATOR_H_ */
