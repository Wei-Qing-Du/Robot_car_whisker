
/*

Function:Avoid car crash to obstacle

Last maintenance of date :2015_08_13

Author:DO-WEI-CHING (杜威慶)

*/

#include "Arduino.h"
#include "Robot_car.h"


#define Clockwise 1300//順時針
#define Counterclockwise 1700//逆時針

	
void Robot_car::Start()
{
	servoRight.attach(Right);
	servoLeft.attach(Left);
}	
	
void Robot_car::Servo_inti_pin(int m_Right,int m_Left)
{
	 Right=m_Right;
	 Left=m_Left;
	 Robot_car::Start();
}

void Robot_car::forward(int time)
{
	servoRight.writeMicroseconds(Clockwise);
	servoLeft.writeMicroseconds(Counterclockwise);
	delay(time);
	
}


void Robot_car::trunLeft(int time)
{
	servoLeft.writeMicroseconds(Clockwise);
	servoRight.writeMicroseconds(Clockwise);
	delay(time);
}

void Robot_car::trunRight(int time)
{
	servoLeft.writeMicroseconds(Counterclockwise);
	servoRight.writeMicroseconds(Counterclockwise);
	
	delay(time);
}

void Robot_car::backward(int time)
{
	servoRight.writeMicroseconds(Counterclockwise);
	servoLeft.writeMicroseconds(Clockwise);
	delay(time);
}

void Robot_car::STOP()
{
	servoRight.detach();
	servoLeft.detach();
}