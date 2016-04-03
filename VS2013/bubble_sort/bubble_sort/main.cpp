#include<iostream>
using namespace std;

void Output(int Tarr[],int Size);
void Bubble_Sort(int Tarr[], int Size);
void swap(int Tarr[], int arg1, int arg2);

int main()
{
	int Tarr[] = { 4, 6, 1, 3, 2 };

	Output(Tarr, 5);
	Bubble_Sort(Tarr, 5);
	Output(Tarr, 5);

	return 0;
}

void swap(int Tarr[], int arg1, int arg2)
{
	int tmp;
	tmp = Tarr[arg1];
	Tarr[arg1] = Tarr[arg2];
	Tarr[arg2] = tmp;
}

void Output(int Tarr[], int Size)
{
	int i;
	for (int i = 0; i < Size; i++)
		cout << Tarr[i];
	cout << endl;
}

void Bubble_Sort(int Tarr[], int Size)
{
	int index1, index2;
	for (int index1 = 0; index1 < Size-1; index1++)
	{
		for (int index2 = Size-1; index2 > index1; index2--)
			if (Tarr[index2 - 1] > Tarr[index2])
			{
				swap(Tarr,index2-1,index2);
			}
	}
}

