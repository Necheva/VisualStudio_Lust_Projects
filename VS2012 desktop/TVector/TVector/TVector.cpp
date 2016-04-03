#include "TVector.h"
#include<iostream>
#include<math.h>
using namespace std;

TVector::TVector(void)
{
	size=0;
	coord=0;
}
TVector::TVector(int N)
{
	size=N;
	coord= new double[size];
	for(int i=0;i<size;i++)
		coord[i]=0;
}
TVector::TVector(const TVector &V )
{
	size=V.size;
	coord= new double[size];
	for(int i=0;i<size;i++)
		coord[i]=V.coord[i];
}


TVector::~TVector(void)
{
	delete[] coord;
}
void TVector :: input()
{
	if(size==0)
	{
		do
		{
			cout << "enter size: ";
			cin >> size;
		} while (size <= 0);
		coord= new double[size];       // для чего?
	}
	cout<<"enter vector["<<size<<"]: ";
	for(int i=0;i<size;i++)
	{
	   cin>>coord[i];
	}
}
void TVector :: print()
{
	cout<<"size= "<<size<<"\n";
	for(int i=0;i<size;i++)
	{
		cout<<coord[i]<<" ";
	}
	cout<<endl;
}

///////////////////////////////////////////////////////////////////////////////////  как определить когда надо использовать TVector& TVector, а когда просто TVector TVector ?

TVector& TVector :: operator =(const TVector& D)         // для чего эта операция?
{
	if(size!=D.size)
	{
		delete[] coord;
		size=D.size;
		coord= new double[size];
	}
	for(int i=0;i<size;i++)
		coord[i]=D.coord[i];
	return *this;
}
 TVector& TVector:: operator++()
{                                                 // объяснить смысл перегрузки и coord[i]+=1.0; 
	for(int i=0;i<size;i++)
		coord[i]+=1.0;
	return *this;
}
 TVector TVector:: operator++(int)
{
	TVector res(*this);
	++(*this);                                    // объяснить смысл перегрузки и ++(*this);
	return res;
}
 double TVector::operator *(const TVector &V)
 {
	 double res=0;
	 int min=size;
	 if(V.size<min)
		 min=V.size;
	 for(int i=0; i< min; i++)
		 res+=coord[i]*V.coord[i];
	 return res;
 }
 TVector TVector::operator +(const TVector &J)
 {
	
	 int min=size;
	 if(J.size<min)
		 min=J.size;
	 TVector res(min);
	 for(int i=0;i<min;i++)
		 res.coord[i]=coord[i]+J.coord[i];
	 return res;
 }
 double TVector :: dlin(void)
 {
	 double res=0;
	 for(int i=0;i<size;i++)
		res+=coord[i]*coord[i];
	 return sqrt(res);
 }
 TVector& TVector :: Delete(int K)
 {   
	 double *tmp=new double[size-1];
	  for(int i=0;i<K;i++)
		tmp[i]=coord[i];
	 for(int i=K;i<size-1;i++)
		 tmp[i]=coord[i+1];
	 delete[]coord;
	 coord=tmp;
	 size--;
	 return *this;

	/* TVector res(size-1);
	 for(int i=0;i<K;i++)
		res.coord[i]=coord[i];
	 for(int i=K;i<size-1;i++)
		 res.coord[i]=coord[i+1];*/
	 //res.print();
	 //(*this)=res;


 }

 double& TVector:: operator [](int I)
 {
	return coord[I];
 }