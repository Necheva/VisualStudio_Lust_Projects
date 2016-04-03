#pragma once
class figur
{
protected:
	int x;
	int y;
public:
	figur(void);
	figur(int a, int b);
	~figur(void);
	virtual double s()=0;
};

