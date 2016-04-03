
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

		cout<<"1. Объединение\n";
		cout<<"2. Пересечение\n";
		cout<<"3. Симметрическая разность \n";
		cout<<"5. Добавить элемент \n";
		cout<<"6. Удалить элемент \n";
		cout<<"4. Выход\n";
		cout<<endl;
		cout<<"Выберите один из пунктов : ";

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
			cout<<" A(1) или B(2) : ";
			cin>>n;
			if(n==1)
			{
				cout<<" Что добавить : ";
				cin>>z;
				A.add(z);
				cout<<"результат добавления : "<<A;
			}
			if(n==2)
			{
				cout<<" Что добавить : ";
				cin>>z;
				B.add(z);
				cout<<"результат добавления : "<<B;
			}
			break;
		case 6:
			cout<<" A(1) или B(2) : ";
			cin>>n;
			if(n==1)
			{
				cout<<" Что удалить : ";
				cin>>z;
				ok=A.del(z);
				if(ok)
				{
					cout<<"результат удаления : "<<A;
				}
				else
				{
					cout<<"Элемент "<<z<<" отсутствует "<<endl;
				}
			}
			if(n==2)
			{
				cout<<" Что удалить : ";
				cin>>z;
				ok=B.del(z);
				if(ok)
				{
					cout<<"результат удаления : "<<B;
				}
				else
				{
					cout<<"Элемент "<<z<<" отсутствует "<<endl;
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
		cout<<"    Сколько элементов хотите в множестве? : ";
		cin>>k;
	}
	while(k<=0);
	 
	A=Tset(k); 
	cout<<"    Введите элементы множества : ";
	cin>>A;
	cout<<"    Множество : "<<A;
	cout<<endl;
}
