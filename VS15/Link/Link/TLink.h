#pragma once
#include<iostream>

using namespace std;

class TLink
{
	int Data;
	TLink* pNext;// почему TLink*...?

public:

	TLink(int D,TLink* TNext);
	int GetData();
	TLink* GetNext();
	void SetNext(TLink* P);// пояснить всю строчку!
	~TLink();

};

class TList
{
	TLink* First;  // почему TLink* First?

public:

	TList(int TD);// что за параметр в скобках?
	int isEmpty();
	int isFull();
	void AddInBeginning(int TD);
	void AddInEnd(int TD);
	int DeleteBeginning();
	void output();
	TList();
	~TList();

};