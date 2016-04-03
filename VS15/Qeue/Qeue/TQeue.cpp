#include "TQeue.h"


TQeue::TQeue()
{
	count = Head = Tail = 0;
	Size = MemSize;
	pMem = new TTask[Size];
	for (int i = 0; i < Size; i++)
		pMem[i] = TTask();
}

TQeue::TQeue(const TQeue &v)
{
	Head = v.Head;
	Tail = v.Tail;
	Size = v.Size;
	pMem = new TTask[Size];
	Head = v.Head;
	for (int i = 0; i < Size; i++)
		pMem[i] = v.pMem[i];
}

TQeue::~TQeue()
{
	if(pMem!=0)
		delete[]pMem;
}

int TQeue::GetNextIndex(int index)
{
	return (++index) % Size;
}

int TQeue::IsFull()
{
	return count == Size;
}

int TQeue::IsEmpty()
{
	return count == 0;
}

void TQeue::put( TTask val)
{
	pMem[Tail] = val;
	Tail = GetNextIndex(Tail);
	++count;
}

TTask TQeue::get()
{
	TTask tmp;
	tmp = pMem[Head];
	Head = GetNextIndex(Head);
	count--;
	return tmp;
}