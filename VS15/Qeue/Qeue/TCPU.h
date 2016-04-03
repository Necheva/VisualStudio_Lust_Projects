//////////////////////////////////////////// четвертый класс
#pragma once
#include"TTasck.h"
class TCPU
{
	TTask Z;
	bool busy;
public:
	bool IsBusy();
	void SetTask(TTask B);
	bool processTask();
	TCPU();
	~TCPU();
};

