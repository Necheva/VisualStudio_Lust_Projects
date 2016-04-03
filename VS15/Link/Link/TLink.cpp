#include "TLink.h"


TLink::TLink(int A,TLink * P)
{
	Data = A;
	pNext = P;

}

TLink::~TLink()
{
}

int TLink:: GetData()
{
	return Data;
}

TLink* TLink:: GetNext()
{
	return pNext;
}

void TLink::SetNext(TLink* P)
{
	pNext = P;
}

//////////////////////////////////////////////////////////////////////////////

TList::TList()
{
	First = 0;
}

TList::TList(int TD)
{
	First = new TLink(TD, 0);// пояснить " TLink(TD, 0) "
}

TList:: ~TList()
{
	while (!isEmpty())
	{
		DeleteBeginning();
	}
}

int TList::isEmpty()
{
	return First == 0;
}
int TList::isFull()
{
	TLink* tmp = new TLink(1, 0);// пояснить " TLink(1, 0) "
	int res = (tmp == 0);
	if (tmp != 0)
	{
		delete tmp;// зачем удалять tmp?
	}
	return res;
}

void TList::AddInBeginning(int TD)
{
	TLink* New = new TLink(TD, First);// за что отвечает каждый параметр в записи TLink(TD, First)?
	First = New;
}
void TList::AddInEnd(int TD)
{
	TLink* New = new TLink(TD, 0);
	TLink* tmp = First;
	while (tmp->GetNext() != 0)// пояснить вот эту строчку " tmp->GetNext() != 0 "
	{
		tmp = tmp->GetNext();
	}
	tmp->SetNext(New);
}
int TList::DeleteBeginning()
{
	TLink* tmp = First;
	int res = tmp->GetData();
	First = tmp->GetNext();
	delete tmp;
	return res;
}

void  TList::output()
{
	TLink* tmp = First;
	cout << "list data" << endl;
	while (tmp != 0)
	{
		cout << tmp->GetData() << endl;
		tmp = tmp->GetNext();
	}
}