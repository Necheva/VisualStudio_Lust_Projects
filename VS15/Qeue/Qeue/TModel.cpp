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
		if (time == T_Next_Task)//���� ������ ���������� � �������
		{
		   TTask B = G.Generate_Task(); ////////////////// ������� Generate_Task() ������� ������������ � ������ TGen.h,������ ���������� ����� TTask?
		   if (!A.IsFull())
		   {
			   A.put(B);/////////////////////////////////???????????????????????????
			   cout << time << " task in queue"<<endl;
		   }
		   else
			   cout <<time<< " task ignored"<<endl;

		   T_Next_Task = time + rand() % Max_Task_Interval + Min_Task_Interval;//����� ������� ��������� ������
		}

		// ������������ ����� 
		if (!A.IsEmpty()&&!cpu.IsBusy())
		{
			TTask B = A.get();//����� ������� �� �������
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