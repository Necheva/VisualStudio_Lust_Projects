#pragma once
#include"figur.h"

class cirkle: public figur
{
	int rad;
public:
	cirkle(void);
	cirkle(int a,int b,int r);
	~cirkle(void);
	double s();
};

