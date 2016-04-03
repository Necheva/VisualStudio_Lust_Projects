#pragma once
#include "TBitField.h"
class Tset
{
	int MaxPower;
	TBitField BitField;

public:
	Tset(int mp);
	Tset(void);
	Tset(const Tset&V);
	~Tset(void);
	void add(int n);
	bool del(int n);
	Tset U(Tset & B);
	Tset Sim(Tset &B);
	Tset Per(Tset & B);
	Tset& operator =(const Tset &V);
	friend istream &operator>>(istream &istr, Tset &V);  
	friend ostream &operator<<(ostream &ostr, Tset &V);
};

