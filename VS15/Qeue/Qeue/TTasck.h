//////////////////////////////////////////// второй класс
#pragma once
class TTask
{
	int prior;
	int col;

public:
	TTask();
	void process();
	int GetCol();
	TTask(int p, int c);
	TTask(const TTask &v);
	~TTask();
};

