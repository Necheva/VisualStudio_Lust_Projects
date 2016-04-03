#include "Pac_dr.h"
#include<iostream>
using namespace std;

Pac_dr::Pac_dr(unsigned int a,unsigned int b)
{
	Ch=a;
	Z=b;
}
Pac_dr::Pac_dr(Pac_dr &X)
{
    
	Ch=X.Ch;
	Z=X.Z;
	if((Ch<0)&&(Z<0))
		cout<<Ch<<"/"<<Z;
}

Pac_dr::~Pac_dr(void) 
{
}

void Pac_dr:: Print()
{
	if((Ch==0)&&(Z!=0))
		cout<<"0";
	if ((Ch == 0) && (Z == 0))
		cout << "you can't divide by 0";
	if((Ch!=0)&&(Z==0))
		cout << "you can't divide by 0";
	if((Ch>0)&&(Z>0))
		cout<<Ch<<"/"<<Z;
	if((Ch<0)&&(Z<0))
		cout<<Ch<<"/"<<Z;
	if((Ch<0)&&(Z>0))
		cout<<Ch<<"/"<<Z;
	if((Ch>0)&&(Z<0))
		cout<<Ch<<"/"<<Z;
	cout<<endl;
}

void Pac_dr:: Input()
{
	cout<<"Ch = ";
	cin>>Ch;
	cout<<"Z  = ";
	cin>>Z;
	cout<<"\n";
}

Pac_dr Pac_dr :: Add(const Pac_dr &X)
{
	Pac_dr res;

	if (Z==X.Z)
	{
		
		res.Ch= Ch+X.Ch;
		res.Z= Z;
	}
	if(Z!=X.Z)
	{
		res.Ch= Ch*X.Z+Z*X.Ch;
		res.Z=Z*X.Z;
	}
	if (Ch == 0)	
	{
		res.Ch = X.Ch;
		res.Z = X.Z;
	}
	res.sokr();
	return res;
}
Pac_dr	Pac_dr:: Sub(const Pac_dr &C)
{
	Pac_dr res;
	
	if (Z==C.Z)
	{
		res.Ch=Ch-C.Ch;
		res.Z=Z;
	}
	if (Z!=C.Z)
	{
		res.Ch=Ch*C.Z-Z*C.Ch;
		res.Z=Z*C.Z;
		
	}
	res.sokr();
	return res;
}
Pac_dr Pac_dr:: Umn(const Pac_dr &M)
{
	Pac_dr res;
	res.Ch= Ch*M.Ch;
	res.Z= Z*M.Z;
	res.sokr();
	return res;
}
Pac_dr Pac_dr :: Del(const Pac_dr &N)
{
	Pac_dr res;
	res.Ch= Ch*N.Z;
	res.Z= Z*N.Ch;
	res.sokr();
	return res;
}
void Pac_dr::sokr()
{
	int c;int n = Ch;int m=Z;
	if (n>m)
	{
		c=n;
		n=m;
		m=c;
	}
	while(n%m!=0)
	{
		c=m;
		m=n%m;
		n=c;
	}
  Ch=Ch/m;
  Z=Z/m;

}