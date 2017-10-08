
task main()
{

	/*float desiredAngleForPivoting;
	float percentOfCircleOfPivoting;
	float wheelRadius;
	float wheelCircumference;
	float distanceBetweenWheelsOfOpositeCorners;
	float imaginaryPivotingCircle;
	float properEncoderAngleValue;
	float distanceToMoveToRotate;

	percentOfCircleOfPivoting = desiredAngleForPivoting / 360;
	wheelCircumference = wheelRadius * PI;
	imaginaryPivotingCircle = distanceBetweenWheelsOfOpositeCorners * PI;
	distanceToMoveToRotate = imaginaryPivotingCircle * percentOfCircleOfPivoting;
	properEncoderAngleValue = 360 * (distanceToMoveToRotate / wheelCircumference);*/

	float desiredAngleForPivoting = 30;
	float distanceBetweenWheelsOfOpositeCorners = 24;
	float wheelDiameter = 4;
	float properEncoderAngleValue = 360 * (((distanceBetweenWheelsOfOpositeCorners * PI) * (desiredAngleForPivoting / 360)) / (wheelDiameter * PI));

}
