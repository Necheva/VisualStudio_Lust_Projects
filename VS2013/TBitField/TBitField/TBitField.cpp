#include "TBitField.h"


int TBitField::GetMemIndex(const int& n) const{
	return n >> 5;
}
unsigned int TBitField::GetMemMask(const int& n) const{
	return 1 << (n & 31);
}
TBitField::TBitField(const int& len):BitLen(len){
	MemLen = (len+31) >> 5;
	pMem = new unsigned int[MemLen];
	for (int i = 0; i < MemLen; ++i)
		pMem[i] = 0;
}
TBitField::TBitField(const TBitField& bf){
	BitLen = bf.BitLen;
	MemLen = bf.MemLen;
	pMem = new unsigned int[MemLen];
	for (int i = 0; i<MemLen; ++i)
		pMem[i] = bf.pMem[i];
}
TBitField::~TBitField(void){
	delete[]pMem;
}
int TBitField::GetLength(void) const{
	return BitLen;
}
void TBitField::SetBit(const int& n){
	if ((n > -1) && (n < BitLen))
		pMem[GetMemIndex(n)] |= GetMemMask(n);
}
void TBitField::ClrBit(const int& n){
	if ((n > -1) && (n < BitLen))
		pMem[GetMemIndex(n)] &= ~GetMemMask(n);
}
int TBitField::GetBit(const int& n) const{
	if ((n > -1) && (n < BitLen))
		return pMem[GetMemIndex(n)] & GetMemMask(n);
	return 0;
}
bool TBitField::operator== (const TBitField& bf){
	bool flag = true;
	int min = MemLen > bf.MemLen ? bf.MemLen : MemLen;
	for (int i = 0; i < min; ++i)
		if (pMem[i] != bf.pMem[i]){
			flag =  false;
			break;
		}
	if (MemLen > bf.MemLen){
		for (int i = bf.MemLen; i < MemLen; ++i)
			if (bf.pMem[i]!=0){
				flag = false;
				break;
			}
		}
	else 
		for (int i = MemLen; i < bf.MemLen; ++i)
			if (bf.pMem[i]!=0){
				flag = false;		
				break;
			}
	return flag; 
}
const TBitField& TBitField::operator= (const TBitField& bf){
	BitLen = bf.BitLen;
	if (MemLen != bf.MemLen){
		MemLen = bf.MemLen;
		if (pMem != NULL)
			delete[]pMem;
		pMem = new unsigned int[MemLen];
	}
	for (int i = 0; i < MemLen; ++i)
		pMem[i] = bf.pMem[i];
	return *this;
}
TBitField TBitField::operator| (const TBitField& bf){
	int len = BitLen > bf.BitLen ? BitLen : bf.BitLen;
	TBitField tmp(len);
	for (int i = 0; i < tmp.MemLen ; ++i)
		tmp.pMem[i] = bf.pMem[i];
	int min = MemLen > tmp.MemLen ? tmp.MemLen : MemLen;
	for (int i = 0; i < min; ++i)
		tmp.pMem[i] |= pMem[i];
	return tmp;
}
TBitField TBitField::operator& (const TBitField& bf){
	int len = BitLen > bf.BitLen ? BitLen : bf.BitLen;
	TBitField tmp(len);
	int min = MemLen > tmp.MemLen ? tmp.MemLen : MemLen;
	for (int i = 0; i < min ; ++i)
		tmp.pMem[i] = bf.pMem[i];
	for (int i = 0; i < min; ++i)
		tmp.pMem[i] &= pMem[i];
	for (int i = min; i < tmp.MemLen; ++i)
		tmp.pMem[i] = 0;
	return tmp;
}
TBitField TBitField::operator~ (void){
	int len = BitLen;
	TBitField tmp(len);
	for (int i = 0; i < MemLen; ++i)
		tmp.pMem[i] = ~pMem[i];
	return tmp;
}
istream& operator>> (istream& is, TBitField& bf){
	int i = 0; 
	char ch;
	do
		is >> ch;
	while (ch == ' ');// !=
	while (1)
		if (ch == '0')
			bf.ClrBit(++i);
		else
			if (ch == '1')
				bf.SetBit(++i);
			else 
				break;
	return is;
}
ostream& operator<< (ostream& os, const TBitField& bf){
	int len = bf.BitLen;
	for (int i = 0; i < len; ++i){
		if (!(i%8))
			os << endl;
		if (bf.GetBit(i))
			os << '1';
		else 
			os << '0';
	}
	return os;
}
