#pragma once
#include<iostream>
using namespace std;
class TLink
{
	int Data;
	TLink* pNext;
	TLink* pPrev;
public:
	TLink(int D, TLink* TNex,TLink* TPrev);
	int GetData();
	TLink* GetNext();
	TLink* GetPrev();
	void SetNext(TLink* P);
	void SetPrev(TLink* L);
	~TLink();
	
};

class DoubleList
{
	TLink* First;
	TLink* Last;
public:
	DoubleList(int TD);
	int isEmpty();
	int isFull();
	void AddInBeginning(int TD);
	void AddInEnd(int TD);
	int DeleteBeginning();
	int DeleteLast();
	void output();
	int Delete(TLink* C);
	TLink* Search(int TD);
	DoubleList();
	~DoubleList();

};