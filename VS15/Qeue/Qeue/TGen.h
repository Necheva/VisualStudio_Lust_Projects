//////////////////////////////////////////// третий класс
#pragma once
#include"TTasck.h"
class TGen
{
	int Max_Priority;
	int Min_Priority;
	int Max_Task_Time;
public:
	TTask Generate_Task();
	TGen();
	~TGen();
};

