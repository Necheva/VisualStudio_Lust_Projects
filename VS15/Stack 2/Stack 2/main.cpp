#include<iostream>
#include"TStack.h"
using namespace std;

void inputstack(TStack &);
void outputstack(TStack &);
void operac(TStack &);

int main()
{
	TStack A;
	inputstack(A);
	operac(A);
	outputstack(A);

}

void inputstack(TStack & V)
{
	int elem = -1;
	cout << "enter your stack: " << endl;
	while (true)
	{
		cin >> elem;
		if (elem == -1)
			break;
		V.put(elem);
	}

}

void outputstack(TStack & V)
{
	cout << "your stack is: ";
	while (!V.isEmpty())
		cout << " " << V.Get();
	cout << endl;
}

void operac(TStack & V)
{
	TStack B;
	int count = 0;
	while (!V.isEmpty())
	{
		int ch=V.Get();
		count++;
		if (count % 2 == 0)
		{
			B.put(ch);
		}
	}
	while (!B.isEmpty())
	{
		V.put(B.Get());
	}

}