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

class Manipulator
{

public:

	Manipulator();
	~Manipulator();

	void shift(bool on);


private:
	DoubleSolenoid* Launcher;
	Compressor* compressor;

};



#endif /* SRC_MANIPULATOR_H_ */
