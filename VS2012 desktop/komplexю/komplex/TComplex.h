#pragma once
class TComplex
{
	double Re;
	double Im;
public:
	TComplex(double a=0,double b=0);
	~TComplex(void);
	void Print();
	void Input();
	TComplex operator + (const TComplex &B);
	TComplex operator - (const TComplex &C);
	TComplex operator * (const TComplex &D);
	TComplex operator / (const TComplex &R);
	TComplex(double x);
};

