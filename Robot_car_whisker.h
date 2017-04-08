/*

Function:Avoid car crash to obstacle

Last maintenance of date :2015_08_13

Author:DO-WEI-CHING (杜威慶)

*/

#ifndef Robot_car_whiskerh
	#define Robot_car_whiskerh
	#include<inttypes.h>
	
	class Robot_car_whisker
	{
		public:
		
			bool Left_Right_crash();
			bool Left_crash();
			bool Right_crash();
			void whisker_stat();
			void WhiskerPin_init(int ,int );
		private:
			int Right_stat;
			int Left_stat;
			int Right;
			int Left;			
	};
	

#endif