#include "Tset.h"

Tset::Tset(const Tset &V)// конструктор копирования
{
	MaxPower=V.MaxPower;
	BitField=V.BitField;
}

Tset::~Tset(void)
{
}

Tset::Tset(int mp)
{
	 MaxPower=mp;
	 BitField=TBitField(mp);

}

Tset::Tset()
{
	MaxPower=0;
	BitField=TBitField(0);
}
void Tset::add(int n)
{
	BitField.SetBit(n);
}

bool Tset::del(int n)
{
	if(BitField.GetBit(n)==0)
		return false;
	BitField.ClrBit(n);
	return true;
}

Tset Tset:: U(Tset &B)/////////////////////////////////
{
	int len=B.BitField.GetLength();
	//Tset C(B);
	Tset C(B.BitField.GetLength());
	for(int i=0; i <len ; i++)
		if(B.BitField.GetBit(i))
			C.add(i);
	for(int i=0; i <BitField.GetLength() ; i++)/////////////////////////
		if(BitField.GetBit(i))
			C.add(i);
	return C;
}


Tset Tset:: Per(Tset &B)
{
	int len=B.BitField.GetLength();
	Tset C(B);
	for(int i=0; i <len ; i++)
		if(C.BitField.GetBit(i))/////////////////////// если поставить if(B.BitFild.GetBit(i)) ?
		{
			if(!BitField.GetBit(i))////////////////////
				C.BitField.ClrBit(i);
		}
	return C;
}

Tset Tset:: Sim(Tset &B)
{
	int len=B.BitField.GetLength();
	Tset C(B);
	for(int i=0; i <len ; i++)
		if(C.BitField.GetBit(i))//////////////////////// если поставить if(B.BitFild.GetBit(i)) ?
		{
			if(BitField.GetBit(i))//////////////////////
				C.BitField.ClrBit(i);
		}
	return C;
}

Tset& Tset:: operator =(const Tset &V)
{
	MaxPower=V.MaxPower;
	BitField=V.BitField;

	return *this;
}


istream & operator>>(istream &istr, Tset &V) 
{
  int n;
  while (1) 
  {
	istr>>n;
	if(n==-1) // exit
		break;

	if ( n<-1 || n>=V.MaxPower) 
	{
		continue;
	}
	V.add(n);

  }
  return istr;
}

ostream &operator<< (ostream &ostr, Tset &V)
{
	int len=V.BitField.GetLength();
	for(int i=0; i < len; i++)
	{	
		if(V.BitField.GetBit(i))
			ostr<<i<<" ";
	}
	ostr<<endl;
	return ostr;

}
