#pragma once

struct number
{
	int x,y;//x-stroka,y-stolb;
};

class Matrix
{
	int n,m; //n-������� m- �������;
	double **a;
public:
	Matrix(int N,int M);
	~Matrix(void);
	void Input();
	void Print();
	number min_max();
};

