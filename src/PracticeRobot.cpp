/*
 * Robot.cpp
 *
 *  Created on: Oct 1, 2015
 *      Author: Admin
 */

#include "Drive.h"
#include "Manipulator.h"

class PracticeRobot: public IterativeRobot
{
private:
	LiveWindow *lw;
	manip* manip;
	drive* drive;
	OI* oi;

	void RobotInit()
	{
		lw = LiveWindow::GetInstance();

		drive = new drive();
		manip = new manip();
		oi = new OI();
	}

	void AutonomousInit()
	{

	}

	void AutonomousPeriodic()
	{

	}

	void TeleopInit()
	{

	}

	void TeleopPeriodic()
	{
		drive->drive_control();
		manip->function();
	}

	void printSmartDashboard()
	{
		oi->getDashboard()->PutNumber("encoder", drive->getEncoderValue());//error: " Invalid arguments 'Candidates are:void PutNumber(?, double)' "
	}


	void TestPeriodic()
	{
		lw->Run();
	}
};

START_ROBOT_CLASS(PracticeRobot);


