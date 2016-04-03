#pragma once
#include"figur.h"

class rect: public figur
{
	int x1;
	int y1;
public:
	rect(void);
	rect(int a,int b,int c,int d);
	~rect(void);
	double s();
};


