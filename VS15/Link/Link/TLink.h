#pragma once
#include<iostream>

using namespace std;

class TLink
{
	int Data;
	TLink* pNext;// ������ TLink*...?

public:

	TLink(int D,TLink* TNext);
	int GetData();
	TLink* GetNext();
	void SetNext(TLink* P);// �������� ��� �������!
	~TLink();

};

class TList
{
	TLink* First;  // ������ TLink* First?

public:

	TList(int TD);// ��� �� �������� � �������?
	int isEmpty();
	int isFull();
	void AddInBeginning(int TD);
	void AddInEnd(int TD);
	int DeleteBeginning();
	void output();
	TList();
	~TList();

};