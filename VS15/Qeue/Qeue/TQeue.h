//////////////////////////////////////////// первый класс
#pragma once
#include"TTasck.h"
# define MemSize 10
class TQeue
{
	int Head;//верхушка очереди
	int Tail;//конец очереди
	TTask *pMem;
	int Size;
	int count;

public:

	TQeue(const TQeue &s);
	int  GetNextIndex(int index);
	int IsFull();
	int IsEmpty();
	void put(const TTask val);
	TTask get();
	TQeue();
	~TQeue();
};

