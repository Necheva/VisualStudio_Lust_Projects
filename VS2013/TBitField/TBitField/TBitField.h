#pragma once

#include <iostream>

using namespace std;


class TBitField
{
		// Поля
	int BitLen /*Длина битового поля*/, MemLen/*Выделенная память элементов unsigned int*/;
	unsigned int *pMem; //*указатель на массив unsigned int
	// Методы
	int GetMemIndex(const int&) const;
	unsigned int GetMemMask(const int&) const;

public:
	TBitField(const int&);
	TBitField(const TBitField&);
	~TBitField(void);
	// Доступ к битам
	int GetLength(void) const;
	void SetBit(const int&);
	void ClrBit(const int&);
	int GetBit(const int&) const;
	// Побитовые операции
	bool operator== (const TBitField&);
	const TBitField& operator= (const TBitField&);
	TBitField operator| (const TBitField&);
	TBitField operator& (const TBitField&);
	TBitField operator~ (void);
    friend istream& operator>> (istream&, TBitField&);
    friend ostream& operator<< (ostream&, const TBitField&);
};
