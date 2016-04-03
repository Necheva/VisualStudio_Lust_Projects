#pragma once

#include <iostream>

using namespace std;


class TBitField
{
		// ����
	int BitLen /*����� �������� ����*/, MemLen/*���������� ������ ��������� unsigned int*/;
	unsigned int *pMem; //*��������� �� ������ unsigned int
	// ������
	int GetMemIndex(const int&) const;
	unsigned int GetMemMask(const int&) const;

public:
	TBitField(const int&);
	TBitField(const TBitField&);
	~TBitField(void);
	// ������ � �����
	int GetLength(void) const;
	void SetBit(const int&);
	void ClrBit(const int&);
	int GetBit(const int&) const;
	// ��������� ��������
	bool operator== (const TBitField&);
	const TBitField& operator= (const TBitField&);
	TBitField operator| (const TBitField&);
	TBitField operator& (const TBitField&);
	TBitField operator~ (void);
    friend istream& operator>> (istream&, TBitField&);
    friend ostream& operator<< (ostream&, const TBitField&);
};
