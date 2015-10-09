/*
 * Robot.cpp
 *
 *  Created on: Oct 1, 2015
 *      Author: Admin
 */

#include "OperatorInterface.h"
#include "Drive.h"
#include "Manipulator.h"

class PracticeRobot: public IterativeRobot
{
private:
	LiveWindow *lw;
	Manipulator* manipulator;
	Drive* drive;
	OperatorInterface* oi;

	void RobotInit()
	{
		lw = LiveWindow::GetInstance();

		drive = new drive();
		manipulator = new Manipulator();
		oi = new OperatorInterface();
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
		drive->driveControl(oi->joystickControlY(), oi->joystickControlX());
		manipulator->shift(oi->joystick->GetRawButton(1));
	}

	void printSmartDashboard()
	{
		oi->getDashboard()->PutNumber("Encoder Value:", drive->getEncoderValue());
	}


	void TestPeriodic()
	{
		lw->Run();
	}
};

START_ROBOT_CLASS(PracticeRobot);


