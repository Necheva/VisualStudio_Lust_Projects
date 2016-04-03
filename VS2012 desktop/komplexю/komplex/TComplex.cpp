#include "TComplex.h"
#include<iostream>
using namespace std;

TComplex::TComplex(double a,double b)
{
	Re=a;
	Im=b;
}


TComplex::~TComplex(void)
{

}

void TComplex :: Print()
{
	
	if((Re==0)&&(Im==0))
		cout<<"0";
	if((Re==0)&&(Im !=0))
		cout<<Im<<"i";
	if((Re!=0)&&(Im==0))
		cout<<Re;
	if((Re!=0)&&(Im!=0)&&(Im>0))
		cout<<Re<<"+"<<Im<<"i";
	if((Re!=0)&&(Im!=0)&&(Im<0))
		cout<<Re<<Im<<"i";
	cout<<endl;
}

void TComplex :: Input()
{
	cout<<"Re = ";
	cin>>Re;
	cout<<"In = ";
	cin>>Im;
	cout<<"\n";
}
TComplex::TComplex(double x)
{
	Re = x;
	Im = 0;
}
TComplex TComplex :: operator + (const TComplex &X)
{
	TComplex res;
	res.Re=Re+X.Re;
	res.Im=Im+X.Im;
	return res;
}
TComplex TComplex :: operator - (const TComplex &C)
{
	TComplex otv;
	otv.Re=Re-C.Re;
	otv.Im=Im-C.Im;
	return otv;
}
TComplex TComplex ::operator * (const TComplex &D)
{
	TComplex res;
	res.Re= Re*D.Re-Im*D.Im;
	res.Im=Re*D.Im+D.Re*Im;
	return res;
}
TComplex TComplex:: operator / (const TComplex &R)
{
	TComplex res;
	if((R.Re==0)&&(R.Im==0))
		cout<<"you can't divide by 0";
	else
	{
	res.Re= (Re*R.Re+Im*R.Im)/(R.Re*R.Re+R.Im*R.Im);
	res.Im=( Im*R.Re-R.Im*Re)/(R.Re*R.Re+R.Im*R.Im);
	}
	return res;
}
