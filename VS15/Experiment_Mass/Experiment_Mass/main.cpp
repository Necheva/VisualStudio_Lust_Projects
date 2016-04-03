#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int  Mass[10][10][10];
	int Size;
	cout << "how many alements do you want?: ";
	cin >> Size;
	cout << "input your massive: "<<endl;
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
		{
			for (int k = 0; k < Size; k++)
			{
				cin >> Mass[i][j][k];
			}
		}
	}
	cout << endl;
	cout << " your massive is: "<<endl;
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
		{
			for (int k = 0; k < Size; k++)
			{
				cout <<setw(3)<< Mass[i][j][k];
				
			}
			cout << "\n";
		}
		cout << "\n";
	}
	

	cout << endl;
	return 0;
}