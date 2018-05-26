/*

Function:Avoid car crash to obstacle

Last maintenance of date :2015_08_13

Author:DO-WEI-CHING (杜威慶)

*/

#ifndef Robot_carh
	#define Robot_carh
	#include <inttypes.h>//各種位寬的整數類型輸入輸出時的轉換標誌宏.
	#include <Servo.h>
	
	class Robot_car
	{
		public:
			
			void forward(int );
			void trunLeft(int );
			void trunRight(int );
			void backward(int );
			void Servo_inti_pin(int ,int );
			void STOP();
			void Start();
	
		private:
			int Right;
			int Left;
			Servo servoRight,servoLeft;
			
	};
#endif
	