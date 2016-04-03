#include"TVector.h"
#include<iostream>
using namespace std;
int main()
{
	int k;
	TVector A;
	A.input();
	A.print();
	TVector B;
	B.input();
	B.print();
	do
	{
		cout<<"1)+";
		cout<<"\n";
		cout<<"2)-";
		cout<<"\n";
		cout<<"3)*";
		cout<<"\n";
		cout<<"4)++";
		cout<<"\n";
		cout<<"5)exit\n";
		cout<<"6)get a[i]\n";
		cout<<"7)set a[i]\n";

		cout<<"\n";
		cout<<"enter the number";
		cout<<"\n";
		cin>>k;
		if (k==1)
		{
			TVector Z=A+B;
			cout<<"Z= ";
			Z.print();
		}
		if (k==3)
		{
			double Q=A*B;
			cout<<"Q= "<<Q<<"\n";
		}
		if(k==4)
		{
			(++A).print();
			(++B).print();
		}
		if(k==6)
		{
			int I;
			cout<<"I= :";
			cin>>I;
			cout<<"A[I]= "<<A[I]<<endl;
		}
		if(k==7)
		{
			int I;
			cout<<"I= :";
			cin>>I;
			cout<<"V= \n";
			double V;
			cin>>V;
			A[I]=V;
			A.print();
		}

	}while(k!=5);
	/*double L=A.dlin();
	cout<<"l= "<<L<<"\n";
	A.Delete(2).print();*/
	return 0;
}