#include "TLink.h"


TLink::TLink(int A, TLink * P,TLink* L)
{
	Data = A;
	pNext = P;
	pPrev = L;
}

TLink::~TLink()
{
}

int TLink::GetData()
{
	return Data;
}

TLink* TLink::GetNext()
{
	return pNext;
}

TLink* TLink::GetPrev()
{
	return pPrev;
}

void TLink::SetNext(TLink* P)
{
	pNext = P;
}

void TLink::SetPrev(TLink* L)
{
	pPrev = L;
}
/////////////////////////////////////////////////////////

DoubleList::DoubleList()
{
	First = 0;
	Last = 0;
}

DoubleList::DoubleList(int TD)
{
	First = new TLink(TD, 0,0);
}

DoubleList:: ~DoubleList()
{
	while (!isEmpty())
	{
		DeleteBeginning();
	}
}

int DoubleList::isEmpty()
{
	return First == 0;
}
int DoubleList::isFull()
{
	TLink* tmp = new TLink(1, 0,0);
	int res = (tmp == 0);
	if (tmp != 0)
	{
		delete tmp;
	}
	return res;
}

void DoubleList::AddInBeginning(int TD)
{
	TLink* New = new TLink(TD, First,0);
	if(First!=0)
		First->SetPrev(New);
	First = New;
	if (Last == 0)
		Last = First;
}
void DoubleList::AddInEnd(int TD)
{
	TLink* New = new TLink(TD, 0, Last);
	if(Last!=0)
		Last->SetNext(New);
	Last = New;
	if (First == 0)
		First = Last;
}
int DoubleList::DeleteBeginning()
{
	if (First == 0)
		throw"empty list";
	TLink* tmp = First;
	int res = tmp->GetData();
	First = tmp->GetNext();
	if(First!=0)
		First->SetPrev(0);
	delete tmp;
	if (First == 0)
		Last = 0;
	return res;
}

int DoubleList::DeleteLast()
{
	if (Last == 0)
		throw"empty list";
	TLink* tmp = Last;
	int res = tmp->GetData();
	Last = tmp->GetPrev();
	if(Last!=0)
		Last->SetNext(0);
	delete tmp;
	if (Last == 0)
		First = 0;
	return res;
}

void  DoubleList::output()
{
	TLink* tmp = First;
	cout << "list data" << endl;
	while (tmp != 0)
	{
		cout << tmp->GetData() << endl;
		tmp = tmp->GetNext();
	}
}

TLink* DoubleList::Search(int TD)
{
	TLink* tmp = First;
	while (tmp != 0)
	{
		if (tmp->GetData() == TD)
			return tmp;
		tmp = tmp->GetNext();
	}
	return 0;
}

int DoubleList::Delete(TLink* C)
{
	if (C == First)
		return DeleteBeginning();
	else
	{
		if (C == Last)
			return DeleteLast();
		else
		{
			if(First==0)
				throw"empty list";
			int res = C->GetData();
			C->GetPrev()->SetNext(C->GetNext());
			C->GetNext()->SetPrev(C->GetPrev());
			delete C;
			return res;
		}
	}
}
