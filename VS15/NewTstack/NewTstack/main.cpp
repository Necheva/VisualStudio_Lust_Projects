#include "TStack.h"
#include <iostream>
using namespace std;
void inputstack(TStack &);
void outputstack(TStack &);
void process(TStack &, TStack &, TStack &, TStack &);
void split(TStack &, TStack &, TStack &);
void putsort(TStack &,int TopSize);

int main()
{
	TStack A;
	TStack B;
	TStack C;
	TStack D;

	inputstack(A);
	inputstack(B);

	process(A, B, C, D);

	outputstack(C);
	outputstack(D);

}

void inputstack(TStack & V)
{
	int elem = -1;
	cout << "enter your stack: " << endl;
	while (true)
	{
		cin >> elem;
		if (elem==-1)
			break;
		V.put(elem);
	}

}
void outputstack(TStack & V)
{
	cout << "your stack is: ";
	while (!V.isEmpty())
		cout <<" "<< V.Get();
	cout << endl;
}

void process(TStack & A, TStack & B, TStack & C, TStack & D)
{
	split(A, C, D);
	split(B, C, D);

}

void split(TStack & A, TStack & C, TStack & D)
{
	while (!A.isEmpty())
	{
		int TopSize = A.Get();

		if (TopSize % 2 == 0)
			putsort(C, TopSize);
		else
			putsort(D, TopSize);
	}
}

void putsort(TStack & C, int TopSize)
{
	TStack E;
	while (!C.isEmpty())
	{
		if (C.Peek() > TopSize)
		{
			E.put(C.Get());
		}
		else
			break;
	}
	C.put(TopSize);
	while (!E.isEmpty())
	{
		C.put(E.Get());

	}
}