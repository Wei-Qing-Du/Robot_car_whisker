
/*

Function:Avoid car crash to obstacle

Last maintenance of date :2015_08_13

Author:DO-WEI-CHING (杜威慶)

*/
#include "Arduino.h"
#include "Robot_car_whisker.h"

void Robot_car_whisker::whisker_stat()
{
	Right_stat=digitalRead(Right);
	Left_stat=digitalRead(Left);
}

bool Robot_car_whisker::Left_Right_crash()
{
	Robot_car_whisker::whisker_stat();
	if(!Right_stat && !Left_stat)
		return 1;
	else
		return 0;
}

bool Robot_car_whisker::Left_crash()
{
	Robot_car_whisker::whisker_stat();
	if(!Left_stat)
		return 1;
	else
		return 0;
}

bool Robot_car_whisker::Right_crash()
{
	Robot_car_whisker::whisker_stat();
	if(!Right_stat)
		return 1;
	else
		return 0;
}

void Robot_car_whisker::WhiskerPin_init(int m_right,int m_left )
{
	Right=m_right;
	Left=m_left;
	pinMode(Right,INPUT);
	pinMode(Left,INPUT);
}



