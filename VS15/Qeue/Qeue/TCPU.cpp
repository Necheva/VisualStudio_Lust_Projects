#include "TCPU.h"



TCPU::TCPU()
{
	Z = TTask();
	busy = false;
}


TCPU::~TCPU()
{
}

bool TCPU::IsBusy()
{
	return busy;
}
void TCPU::SetTask(TTask B)
{
	Z = B;
	busy = true;
}
bool TCPU::processTask()
{
	Z.process();
	if (Z.GetCol() > 0)
		return true;
	else
		return false;
}