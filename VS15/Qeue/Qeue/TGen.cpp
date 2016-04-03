#include "TGen.h"
#include<stdlib.h>


TGen::TGen()
{
	Max_Priority = 10;
	Min_Priority = 0;
	Max_Task_Time = 20;
}


TGen::~TGen()
{
}

TTask TGen::Generate_Task()
{
	int interval[11] =
	{0,10,20,30,40,50,60,70,80,90,100};
	int Rand = rand() % 100;
	for (int i = Min_Priority; i < Max_Priority; i++)
		if (Rand >= interval[i] && Rand < interval[i + 1])
		{
			int Task_Time = rand() % Max_Task_Time;
			TTask A = TTask(i, Task_Time);
			return A;
		}
	return TTask();
}