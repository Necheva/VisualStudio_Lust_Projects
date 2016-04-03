#include "TStack.h"

TStack::TStack(const TStack &v)
{
	Size = v.Size;
	pMem = new int[Size];
	top = v.top;
	for (int i = 0; i < Size; i++)
		pMem[i] = v.pMem[i];
}

TStack::TStack()
{
	top = -1;
	Size = MemSize;
	pMem = new int[Size];
	for (int i = 0; i < Size; i++)
		pMem[i] = 0;
}

TStack::TStack(int si) {
	top = -1;
	Size = si;
	pMem = new int[Size];
	for (int i = 0; i < Size; i++)
		pMem[i] = 0;
}

TStack::~TStack()
{
	delete[]pMem;
}

int TStack::isEmpty() const
{
	return top == -1;
}

int TStack::isFull() const
{
	return top == Size-1;
}

void TStack::put(int Val)
{
	pMem[++top] = Val;
}

int TStack::Get(void)
{
	return pMem[top--];
}

int TStack::Peek() const
{
	return pMem[top];
}