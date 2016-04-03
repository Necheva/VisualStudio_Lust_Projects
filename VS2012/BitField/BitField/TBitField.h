#pragma once
#include<iostream>
using namespace std;

typedef unsigned int TELEM;
class TBitField
{
	int BitField;
	int MemLen; 
	TELEM *pMem;
	
	TELEM GetMemMask(const int n) const;
public:
	int GetMemindex (const int n) const;
	TBitField(int len);
	TBitField(void);
	TBitField(const TBitField &V);
	~TBitField(void);
	void SetBit(const int n);
	void ClrBit(const int n);
	int GetBit(const int n);
	int GetLength(void) const;
	int  operator==(const TBitField &V);  
	friend istream &operator>>(istream &istr, TBitField &V);  
	friend ostream &operator<<(ostream &ostr, TBitField &V);  
	TBitField & operator=(const TBitField &V); 
	TBitField operator|(const TBitField &BF);
	TBitField operator&(const TBitField &BF);
	TBitField& operator~(void);
	int operator!=(const TBitField &BF) const;

};

