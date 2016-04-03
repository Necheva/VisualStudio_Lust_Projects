#include "rect.h"


rect::rect(void): figur()
{
	x1=0;
	y1=0;
}
rect :: rect(int a,int b,int c,int d): figur(a,b)
{
	x1=c;
	y1=d;
}


rect::~rect(void)
{
}

double rect::s()
{
	return ((x1-x)*(y1-y));
}