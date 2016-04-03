#pragma once

class Pac_dr
{
	int Ch;
	int Z;
public:
	Pac_dr(unsigned int a=0,unsigned int b=0);
	Pac_dr(Pac_dr &X);
	~Pac_dr(void);
	void Print();
	void Input();
	Pac_dr Add(const Pac_dr &B);
	Pac_dr Sub(const Pac_dr &C);
	Pac_dr Umn(const Pac_dr &M);
	Pac_dr Del(const Pac_dr &N);
	void sokr();
};

