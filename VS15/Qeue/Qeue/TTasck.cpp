#include "TTasck.h"


TTask::TTask(int p, int c)
{
	prior = p;
	col = c;
}

TTask::TTask(const TTask &v)
{
	prior = v.prior;
	col = v.col;

}
TTask::TTask()
{
	prior = 0;
	col = 0;
}


TTask::~TTask()
{
}

void TTask::process()
{
	if(col>0)
		col--;
}
int TTask::GetCol()
{
	return col;
}