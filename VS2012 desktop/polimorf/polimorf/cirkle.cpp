#include "cirkle.h"


cirkle::cirkle(void): figur()
{
	rad=0;
}
cirkle::cirkle(int a,int b,int r):figur(a,b)
{
	rad=r;
}



cirkle::~cirkle(void)
{
}

double cirkle::s()
{
	double pi=3.14;
	return(pi*(rad*rad));
}