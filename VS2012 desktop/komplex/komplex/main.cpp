#include<iostream>
#include"TComplex.h"
int main()
{
	using namespace std;
	TComplex A,B;
	int k;
	A.Input();
	B.Input();
	cout<<"________________________\n";
	A.Print();
	cout<<"\n";
	B.Print();
	cout<<"________________________\n";
	do
	{
		cout<<"1)+";
		cout<<"\n";
		cout<<"2)-";
		cout<<"\n";
		cout<<"3)*";
		cout<<"\n";
		cout<<"4)/";
		cout<<"\n";
		cout<<"5)exit";
		cout<<"\n";
		cout<<"enter the number";
		cout<<"\n";
		cin>>k;
		if (k==1)
		{
			cout<<"result = ";
			TComplex G=A.Add(B);
			G.Print();
		}
		
		if (k==2)
		{
			cout<<"result = ";
			TComplex Q=A.Sub(B);
			Q.Print();
		}
		
		if (k==3)
		{
			cout<<"result = ";
			TComplex W=A.Umn(B);
			W.Print();
		}
		
		if (k==4)
		{
			cout<<"result = ";
			TComplex Z=A.Del(B);
			Z.Print();
		}
		
	}while(k!=5);
	return 0;
}