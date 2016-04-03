#include<iostream>
#include "Pac_dr.h"
int main()
{
	using namespace std;
	Pac_dr A,B;
	int k;
	A.Input();
	B.Input();
	cout<<"_________________________\n";
	cout << "the first fraction : ";
	A.Print();
	cout<<"\n";
	cout << "the second fraction : ";
	B.Print();
	cout<<"_________________________\n";
	do
	{
		cout<<"1) +";
		cout<<"\n";
		cout<<"2) -";
		cout<<"\n";
		cout<<"3) *";
		cout<<"\n";
		cout<<"4) /";
		cout<<"\n";
		cout<<"5) exit";
		cout<<"\n";
		cout<<"enter the number";
		cout<<"\n";
		cin>>k;
		if (k==1)
		{
			cout<<"result = ";
			Pac_dr G=A.Add(B);
			G.Print();
		}
		
		if (k==2)
		{
			cout<<"result = ";
			Pac_dr Q=A.Sub(B);
			Q.Print();
		}
		
		if (k==3)
		{
			cout<<"result = ";
			Pac_dr T=A.Umn(B);
			T.Print();
		}
		
		if (k==4)
		{
			cout<<"result = ";
			Pac_dr F=A.Del(B);
			F.Print();
		}
		
	}while(k!=5);

	return 0;
}