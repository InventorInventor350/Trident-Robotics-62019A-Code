#pragma config(Sensor, in1,    liftSensor,     sensorPotentiometer)
#pragma config(Sensor, dgtl1,  baseEncoderLeft, sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  baseEncoderRight, sensorQuadEncoder)
#pragma config(Motor,  port1,           clawMotor,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           leftBase,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           rightBase,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           liftSet1,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           liftSet2,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           leftMogo,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           rightMogo,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           leftChainBar,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           rightChainBar, tmotorVex393_MC29, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void liftLift(int speed)
{

	motor[liftSet1] = speed;
	motor[liftSet2] = speed;

}

void moveBaseStraight(int speed)
{

	motor[leftBase] = speed;
	motor[rightBase] = speed;

}

void moveBaseTurnLeft(int turnSspeed)
{

	motor[leftBase] = fabs(turnSspeed);
	motor[rightBase] = -fabs(turnSspeed);

}

void moveBaseTurnRight(int turnSspeed)
{

	motor[leftBase] = -fabs(turnSspeed);
	motor[rightBase] = fabs(turnSspeed);

}

task main()
{



}
