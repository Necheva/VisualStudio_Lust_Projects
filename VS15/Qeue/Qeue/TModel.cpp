#include "TModel.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

TModel::TModel()
{
	time = 0;
	Max_Task_Interval = 10;
	Min_Task_Interval = 1;
	Finish_Time = 100;

	cpu = TCPU();
	A = TQeue();
	G = TGen();
}


TModel::~TModel()
{
}

void TModel::run()
{
	int T_Next_Task = rand() % Max_Task_Interval + Min_Task_Interval;

	time = 0;
	while (time < Finish_Time)
	{
		if (time == T_Next_Task)//если задача появляется в системе
		{
		   TTask B = G.Generate_Task(); ////////////////// функция Generate_Task() впервые используется в классе TGen.h,почему вызывается через TTask?
		   if (!A.IsFull())
		   {
			   A.put(B);/////////////////////////////////???????????????????????????
			   cout << time << " task in queue"<<endl;
		   }
		   else
			   cout <<time<< " task ignored"<<endl;

		   T_Next_Task = time + rand() % Max_Task_Interval + Min_Task_Interval;//время прихода следующей задачи
		}

		// обслуживание задач 
		if (!A.IsEmpty()&&!cpu.IsBusy())
		{
			TTask B = A.get();//берем задание из очереди
			cpu.SetTask(B);
			cout << "task is set to cpu" << endl;
		}
		if (cpu.IsBusy())
		{
			cpu.processTask();
		}

		time++;
	}

}