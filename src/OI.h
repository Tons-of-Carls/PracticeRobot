/*
 * SmartDashBoard.h
 *
 *  Created on: Oct 7, 2015
 *      Author: Admin
 */

#ifndef SRC_OI_H_
#define SRC_OI_H_

#include "WPIlib.h"

class OI
{
private:
	OI();
	~OI();

	SmartDashboard* getDashboard();

public:
	SmartDashboard* dashboard;

};


#endif /* SRC_OI_H_ */
