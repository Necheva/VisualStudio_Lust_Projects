#pragma once
class TVector
{
	int size;
	double *coord;

public:
	TVector(void);
	TVector(int N );
	TVector(const TVector &V); 
	~TVector(void);
	void input();
	void print();
	TVector& operator=(const TVector& D);
	TVector&  operator++();
    TVector  operator++(int);
	double operator *(const TVector &V);
	TVector operator +(const TVector &J);

	double& operator [](int I);
	double dlin(void);
	TVector& Delete(int);
};

