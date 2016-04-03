//////////////////////////////////////////// пятый класс
#pragma once
#include"TQeue.h"
#include"TTasck.h"
#include"TGen.h"
#include"TCPU.h"
class TModel
{
	int time;
	TQeue A;
	TGen G;
	TCPU cpu;
	int Max_Task_Interval;
	int Min_Task_Interval;
	int Finish_Time;
public:
	void run();
	TModel();
	~TModel();
};

