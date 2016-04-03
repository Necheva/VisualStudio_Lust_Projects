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
	TComplex Add(const TComplex &B);
	TComplex Sub(const TComplex &C);
	TComplex Umn(const TComplex &D);
	TComplex Del(const TComplex &R);
};

