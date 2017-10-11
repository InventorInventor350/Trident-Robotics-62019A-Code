/*---------------------------------------------------------------------------*/
/*                                                                           */
/*        Description: Competition template for VEX EDR                      */
/*                                                                           */
/*---------------------------------------------------------------------------*/

// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton()
{
	// Set bStopTasksBetweenModes to false if you want to keep user created tasks
	// running between Autonomous and Driver controlled modes. You will need to
	// manage all user created tasks if set to false.
	bStopTasksBetweenModes = true;

	// Set bDisplayCompetitionStatusOnLcd to false if you don't want the LCD
	// used by the competition include file, for example, you might want
	// to display your team name on the LCD in this function.
	// bDisplayCompetitionStatusOnLcd = false;

	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task autonomous()
{
	// ..........................................................................
	// Insert user code here.
	// ..........................................................................

	// Remove this function call once you have "real" code.
	AutonomousCodePlaceholderForTesting();
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task usercontrol()
{
	// User control code here, inside the loop

	while (true)
	{
		
		if(vexRT[Ch3] > 10 || vexRT[Ch3] < -10) //Control for left side of base
		{

			motor[leftBase] = vexRT[Ch3];

		}

		else
		{

			motor[leftBase] = 0;

		}

		if(vexRT[Ch2] > 10 || vexRT[Ch2] < -10) //Control for right side of base
		{

			motor[rightBase] = vexRT[Ch2];

		}

		else
		{

			motor[rightBase] = 0;

		}

		if(vexRT[Btn7U] == 1) //Controls Mogo manipulator
		{

			motor[leftMogo] = 65;
			motor[rightMogo] = 65;

		}

		else if(vexRT[Btn7D] == 1) //Controls Mogo manipulator
		{

			motor[leftMogo] = -65;
			motor[rightMogo] = -65;

		}

		else
		{

			motor[leftMogo] = 0;
			motor[rightMogo] = 0;

		}

		if(vexRT[Btn5UXmtr2] == 1) //Controls dr4b lift
		{

			motor[liftSet1] = 120;
			motor[liftSet2] = 120;

		}

		else if(vexRT[Btn5DXmtr2] == 1) //Controls dr4b lift
		{

			motor[liftSet1] = -120;
			motor[liftSet2] = -120;

		}

		else
		{

			motor[liftSet1] = 0;
			motor[liftSet2] = 0;

		}

		if(vexRT[Btn6UXmtr2] == 1) //Controls chain bar lift
		{

			motor[leftChainBar] = 100;
			motor[rightChainBar] = 100;

		}

		else if(vexRT[Btn6DXmtr2] == 1) //Controls chain bar lift
		{

			motor[leftChainBar] = -100;
			motor[rightChainBar] = -100;

		}

		else
		{

			motor[leftChainBar] = 0;
			motor[rightChainBar] = 0;

		}

		if(vexRT[Btn8UXmtr2] == 1) //Controls claw
		{

			motor[clawMotor] = 127;

		}

		else if(vexRT[Btn8DXmtr2] == 1) //Controls claw
		{

			motor[clawMotor] = -127;

		}

		else
		{

			motor[clawMotor] = 0;

		}
		
	}
}
