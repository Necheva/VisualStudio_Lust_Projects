
#include"Tset.h"
#include<iostream>

using namespace std;

void Input(Tset& A);

int main()
{
	int menu;
	int n;
	int z;
	int k=0;
	int b=0;
	Tset A,B;
	 
	Input(A);
	Input(B);
	Tset C;
	do
	{
		setlocale(LC_ALL, "Russian");

		cout<<"1. �����������\n";
		cout<<"2. �����������\n";
		cout<<"3. �������������� �������� \n";
		cout<<"5. �������� ������� \n";
		cout<<"6. ������� ������� \n";
		cout<<"4. �����\n";
		cout<<endl;
		cout<<"�������� ���� �� ������� : ";

		cin>>menu;
		bool ok=false;
		switch (menu)
		{
		case 1:
			C=A.U(B);
			cout<<"result U : "<<C;
			break;
		case 2:
			C=A.Per(B);
			cout<<"result Per : "<<C;
			break;
		case 3:
			C=A.Sim(B);
			cout<<"result Sim : "<<C;
			break;
		case 5:
			cout<<" A(1) ��� B(2) : ";
			cin>>n;
			if(n==1)
			{
				cout<<" ��� �������� : ";
				cin>>z;
				A.add(z);
				cout<<"��������� ���������� : "<<A;
			}
			if(n==2)
			{
				cout<<" ��� �������� : ";
				cin>>z;
				B.add(z);
				cout<<"��������� ���������� : "<<B;
			}
			break;
		case 6:
			cout<<" A(1) ��� B(2) : ";
			cin>>n;
			if(n==1)
			{
				cout<<" ��� ������� : ";
				cin>>z;
				ok=A.del(z);
				if(ok)
				{
					cout<<"��������� �������� : "<<A;
				}
				else
				{
					cout<<"������� "<<z<<" ����������� "<<endl;
				}
			}
			if(n==2)
			{
				cout<<" ��� ������� : ";
				cin>>z;
				ok=B.del(z);
				if(ok)
				{
					cout<<"��������� �������� : "<<B;
				}
				else
				{
					cout<<"������� "<<z<<" ����������� "<<endl;
				}
			}
			break;
		default:
			break;
		}
		
	}
	while(menu!=4);
	

	return 0;
}

void Input(Tset& A)
{
	int k;
	do
	{
		setlocale(LC_ALL, "Russian");
		cout<<"    ������� ��������� ������ � ���������? : ";
		cin>>k;
	}
	while(k<=0);
	 
	A=Tset(k); 
	cout<<"    ������� �������� ��������� : ";
	cin>>A;
	cout<<"    ��������� : "<<A;
	cout<<endl;
}
