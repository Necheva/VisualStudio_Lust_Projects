
#include <stdio.h>
#include <conio.h> 

#include <iostream>

using namespace std;


int main (){
	setlocale(LC_ALL, "Russian");
	int v;
do
{
	cout << "��� �� ������ �������? ������� ����� ������� ��� ��������" << endl;
	cout << "\t1. �������� ��� �����������\n" << 
		"\t2. ������ ����������\n" <<
		"\t3. ����� �� ���������\n\n";
	v = 4;
	while (v<1 || v>3)
		v = int(_getch()-48);
	switch (v){
	case 1: {
		cout << "������� �������� �� ������ ������?\n";
		int number;
		scanf_s("%d[0..9]", &number);
		
		int n;
		for (int i = 0; i < number; ++i){
			cout << "������� �������� " << i+1 << " ���������: _ ";
			scanf_s("%d[0..9]", &n);
			
		}

		
	int v2;
	do
	{
		cout << "�������� �������� ��� �����������: " << endl;
		cout << "\t0. �������� ������� � ���������\n" << 
			"\t1. ������� ������� �� ���������\n" <<
			"\t2. ��������� ������� �������� � ���������\n" <<
			"\t3. ��������� ��������\n" << 
			"\t4. ������������ ��������\n" <<
			"\t5. ��������� �������� � ���������\n" <<
			"\t6. ����������� ��������\n" << 
			"\t7. ����������� ��������\n" << 
			"\t8. ���������� � ���������\n" <<
			"\t9. ��������� � �������� ����\n\n";
		v2 = 10;
		while (v2<0 || v2>9)
			v2 = int(_getch()-48);

		switch (v2){
			case 0: {
				cout << "� ����� ���������� ����������� ��������?" << endl << "������������ ���������" << endl;
				
				int key = number + 1;
				while (key<1 || key>number)
					key = int(_getch()-48);
				cout << "������� ��������, ������� ���������� �������� � ���������" << endl;
				
				break;
					}
			case 1: {
				cout << "� ����� ���������� ����������� ��������?" << endl << "������������ ���������" << endl;
				
				int key = number + 1;
				while (key<1 || key>number)
					key = int(_getch()-48);
				cout << "������� ��������, ������� ���������� ������� �� ���������" << endl;
				
			
			
					}
			case 2: {
				cout << "� ����� ���������� ����������� ��������?" << endl << "������������ ���������" << endl;
				
				int key = number + 1;
				while (key<1 || key>number)
					key = int(_getch()-48);
				cout << "������� �������, ������� �������� ���������� ��������� � ���������" << endl;
				int num;
				scanf_s("%d[0..9]", &num);
				
					}
			case 3: {
				cout << "����� 2 ��������� ����������?" << endl << "������������ ���������" << endl;
				
				int	key1 = number + 1, key2 = number + 1;
				while (key1<1 || key1>number)
					key1 = int(_getch()-48);
			
				while (key2<1 || key2>number)
					key2 = int(_getch()-48);
			
	
				break;
					}
			case 4: {
				cout << "����� ��������� ������� ��������� ������?" << endl << "������������ ���������" << endl;
				
				int key1 = number + 1, key2 = number + 1;
				while (key1<1 || key1>number)
					key1 = int(_getch()-48);
				while (key2<1 || key2>number)
					key2 = int(_getch()-48);
				cout << "���������: " << endl;
			
				break;
					}
			case 5: {
				cout << "� ����� ��������� ������� �������� ��������� �������?" << endl << "������������ ���������" << endl;
				
				int key1 = number + 1;
				while (key1<1 || key1>number)
					key1 = int(_getch()-48);
				cout << "������� �������" << endl;
				int elem;
				scanf_s ("%d[0..9]", &elem);
			
					}
			case 6: {
				cout << "����� ��� ��������� ������� ����������?" << endl << "������������ ���������" << endl;
			
				int key1 = number + 1, key2 = number + 1;
				while (key1<1 || key1>number)
					key1 = int(_getch()-48);
				
				while (key2<1 || key2>number)
					key2 = int(_getch()-48);
				
				
				break;
					}
			case 7: {
				cout << "����� 2 ��������� ���� ��������?" << endl << "������������ ���������" << endl;
				
				int key1 = number + 1, key2 = number + 1;
				while (key1<1 || key1>number)
					key1 = int(_getch()-48);
				
		
					}
			case 8: {
				cout << "� ������ ��������� ����� ����� ����������?" << endl << "������������ ���������" << endl;
				
				int key1 = number + 1;
				while (key1<1 || key1>number)
					key1 = int(_getch()-48);
				
				break;
					}
				}
				}while (v2!=9);
			break;
			}
		case 2: {
			int n, m, k;
			cout << "������� ������� ������� ����� �������� - ";
			
			for ( m=2; m<=n; m++ )
			for ( m=2; m*m<=n; m++ )
				
					for ( k=2*m; k<=n; k+=m )
						
			cout << "������ ������� �����" << endl;
			
			break;
				 }
	}
	}while(v!=3);
	return 0;
}