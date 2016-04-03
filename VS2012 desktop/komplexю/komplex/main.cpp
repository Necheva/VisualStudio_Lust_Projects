#include<iostream>
#include"TComplex.h"
int main()
{
	using namespace std;
	TComplex A, B, G, Q, W, Z, V;
	int k;
	double x;
	A.Input();
	B.Input();
	cout << "input x ";
	cin >>x;
	cout<<"________________________\n";
	A.Print();
	cout<<"\n";
	B.Print();
	cout << "\n";
	cout << x;
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
		cout<<"5)The first complex number + x";
		cout<<"\n";
		cout<<"6)The second complex number + x";
		cout<< "\n";
		cout<<"7)exit";

		cout<<"\n";
		cout<<"enter the number";
		cout<<"\n";
		cin>>k;
		if (k==1)
		{
			cout<<"result = ";
			G=A+B;
			G.Print();
		}
		
		if (k==2)
		{
			cout<<"result = ";
			Q=A-B;
			Q.Print();
		}
		
		if (k==3)
		{
			cout<<"result = ";
			W=A*B;
			W.Print();
		}
		
		if (k==4)
		{
			cout<<"result = ";
			Z=A/B;
			Z.Print();
		}

		//if (k == 5)
			//V = TComplex(x);
	}while(k!=7);
	return 0;
}