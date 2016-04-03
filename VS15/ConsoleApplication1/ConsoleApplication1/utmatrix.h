#ifndef __TMATRIX_H__
#define __TMATRIX_H__

#include <iostream>

using namespace std;

const int MAX_VECTOR_SIZE = 100000000;
const int MAX_MATRIX_SIZE = 10000;

// ������ �������
template <class ValType>
class TVector
{
protected:
	ValType *pVector;
	int Size;       // ������ �������
	int StartIndex; // ������ ������� �������� �������
public:
	TVector(int s = 10, int si = 0);
	TVector(const TVector &v);                // ����������� �����������
	~TVector();
	int GetSize() { return Size; } // ������ �������
	int GetStartIndex() { return StartIndex; } // ������ ������� ��������
	ValType& operator[](int pos);             // ������
	bool operator==(const TVector &v) const;  // ���������
	bool operator!=(const TVector &v) const;  // ���������
	TVector<ValType>& operator=(const TVector<ValType> &v);     // ������������

																// ��������� ��������
	TVector  operator+(const ValType &val);   // ��������� ������
	TVector  operator-(const ValType &val);   // ������� ������
	TVector  operator*(const ValType &val);   // �������� �� ������

											  // ��������� ��������
	TVector  operator+(const TVector &v);     // ��������
	TVector  operator-(const TVector &v);     // ���������
	ValType  operator*(const TVector &v);     // ��������� ������������

											  // ����-�����
	friend istream& operator>>(istream &in, TVector &v)
	{
		for (int i = 0; i < v.Size; i++)
			in >> v.pVector[i];
		return in;
	}
	friend ostream& operator<<(ostream &out, const TVector &v)
	{
		for (int i = 0; i < v.Size; i++)
			out << v.pVector[i] << ' ';
		return out;
	}
};

template <class ValType>
TVector<ValType>::TVector(int s, int si)
{
	Size = s;
	StartIndex = si;
	pVector = new ValType[Size];

} /*-------------------------------------------------------------------------*/

template <class ValType> //����������� �����������
TVector<ValType>::TVector(const TVector<ValType> &v)
{
	Size = v.Size;
	StartIndex = v.StartIndex;
	pVector = new ValType[Size];
	for (int i = 0; i<Size; i++)
		pVector[i] = v.pVector[i];
} /*-------------------------------------------------------------------------*/

template <class ValType>
TVector<ValType>::~TVector()
{
	delete[] pVector;
} /*-------------------------------------------------------------------------*/

template <class ValType> // ������
ValType& TVector<ValType>::operator[](int pos)
{
	return pVector[pos-StartIndex];
} /*-------------------------------------------------------------------------*/

template <class ValType> // ���������
bool TVector<ValType>::operator==(const TVector &v) const
{
	if (StartIndex != v.StartIndex)
		return false;
	if (Size == v.Size)
	{
		for (int i = 0; i < Size; i++)
			if (pVector[i] != v.pVector[i])
				return false;
	}
	else return false;
	return true;
} /*-------------------------------------------------------------------------*/

template <class ValType> // ���������
bool TVector<ValType>::operator!=(const TVector &v) const
{
	if (StartIndex != v.StartIndex)
		return true;
	if (Size == v.Size)
	{
		for (int i = 0; i < Size; i++)
			if (pVector[i] != v.pVector[i])
				return true;
	}
	else return true;
	return false;
} /*-------------------------------------------------------------------------*/

template <class ValType> // ������������
TVector<ValType>& TVector<ValType>::operator=(const TVector<ValType> &v)
{
	if (this != &v)///////////////////////////////////////////////////////////////////////////////////////////////////////
	{
		if (Size != v.Size)
		{
			delete[] pVector;
			Size = v.Size;
			pVector = new ValType[Size];
		}
		StartIndex = v.StartIndex;
		for (int i = 0; i < Size; i++)
			pVector[i] = v.pVector[i];
	}
	return *this;
} /*-------------------------------------------------------------------------*/

template <class ValType> // ��������� ������
TVector<ValType> TVector<ValType>::operator+(const ValType &val)
{
	TVector res(*this);///////////////////////////////////////////////////////////////////////////////////////////////////////
	for (int i = StartIndex; i<Size+StartIndex; i++)
		res[i] = res[i] + val;
	return res;
} /*-------------------------------------------------------------------------*/

template <class ValType> // ������� ������
TVector<ValType> TVector<ValType>::operator-(const ValType &val)
{
	TVector res(*this);///////////////////////////////////////////////////////////////////////////////////////////////////////
	for (int i = StartIndex; i<Size + StartIndex; i++)
		res[i] = res[i] - val;
	return res;
} /*-------------------------------------------------------------------------*/

template <class ValType> // �������� �� ������
TVector<ValType> TVector<ValType>::operator*(const ValType &val)
{
	TVector res(*this);///////////////////////////////////////////////////////////////////////////////////////////////////////
	for (int i = StartIndex; i<Size + StartIndex; i++)
		res[i] = res[i] * val;
	return res;
} /*-------------------------------------------------------------------------*/

template <class ValType> // ��������
TVector<ValType> TVector<ValType>::operator+(const TVector<ValType> &v)
{
	
	if (Size == v.Size)
	{
		TVector<ValType> res(*this);///////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = StartIndex; i < Size+StartIndex; i++)
			res.pVector[i] = pVector[i] + v.pVector[i];
	}
	return res;
} /*-------------------------------------------------------------------------*/

template <class ValType> // ���������
TVector<ValType> TVector<ValType>::operator-(const TVector<ValType> &v)
{

	if (Size == v.Size)
	{
		TVector<ValType> res(*this);///////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = StartIndex; i < Size + StartIndex; i++)
			res.pVector[i] = pVector[i] + v.pVector[i];
	}
	return res;
} /*-------------------------------------------------------------------------*/

template <class ValType> // ��������� ������������
ValType TVector<ValType>::operator*(const TVector<ValType> &v)
{
	
	ValType res = 0;
	if (Size == v.Size)
	{
		for (int i = 0; i < Size + StartIndex; i++)
			res += pVector[i] * v.pVector[i];
	}
	return res;
} /*-------------------------------------------------------------------------*/


  // ����������������� �������
template <class ValType>
class TMatrix : public TVector<TVector<ValType> >
{
public:
	TMatrix(int s = 10);
	TMatrix(const TMatrix &mt);                    // �����������
	TMatrix(const TVector<TVector<ValType> > &mt); // �������������� ����
	bool operator==(const TMatrix &mt) const;      // ���������
	bool operator!=(const TMatrix &mt) const;      // ���������
	TMatrix& operator= (const TMatrix &mt);        // ������������
	TMatrix  operator+ (const TMatrix &mt);        // ��������
	TMatrix  operator- (const TMatrix &mt);        // ���������

												   // ���� / �����
	friend istream& operator>>(istream &in, TMatrix &mt)
	{
		for (int i = 0; i < mt.Size; i++)
			in >> mt.pVector[i];
		return in;
	} 
	friend ostream & operator<<(ostream &out, const TMatrix &mt)
	{
		for (int i = 0; i < mt.Size; i++)
			out << mt.pVector[i] << endl;
		return out;
	}
};

template <class ValType>
TMatrix<ValType>::TMatrix(int s) : TVector<TVector<ValType> >(s)// �������� ������� pVector = new TVector<ValType> [Size];
{
	Size=s;
	for (int i = 0; i<Size; i++)
	{
		pVector[i] = TVector<ValType>(Size - i, i);
		 
	}
} /*-------------------------------------------------------------------------*/

template <class ValType> // ����������� �����������  
TMatrix<ValType>::TMatrix(const TMatrix<ValType> &mt) :    // ������� ����������� �����������
	TVector<TVector<ValType> >(mt){}


template <class ValType> // ����������� �������������� ����
TMatrix<ValType>::TMatrix(const TVector<TVector<ValType> > &mt) :
	TVector<TVector<ValType> >(mt) {}

template <class ValType> // ���������
bool TMatrix<ValType>::operator==(const TMatrix<ValType> &mt) const
{
	if (Size == mt.Size)
	{
		for (int i = 0; i < Size; i++)
			if (pVector[i] != mt.pVector[i])
				return false;
	}
	else return false;
	return true;
} /*-------------------------------------------------------------------------*/

template <class ValType> // ���������
bool TMatrix<ValType>::operator!=(const TMatrix<ValType> &mt) const
{
	if (Size == mt.Size)
	{
		for (int i = 0; i < Size; i++)
			if (pVector[i] != mt.pVector[i])
				return true;
	}
	else return true;
	return false;
} /*-------------------------------------------------------------------------*/

template <class ValType> // ������������
TMatrix<ValType>& TMatrix<ValType>::operator=(const TMatrix<ValType> &mt)
{
	if (this != &mt)
	{
		StartIndex = mt.StartIndex;
		if (Size != mt.Size)
		{
			delete[]pVector;
			Size = mt.Size;
			pVector = new TVector<ValType>[Size];

		}
		for (int i = 0; i<Size; i++)
		{
			pVector[i] = mt.pVector[i];
		}
	}
	return *this;
} /*-------------------------------------------------------------------------*/

template <class ValType> // ��������
TMatrix<ValType> TMatrix<ValType>::operator+(const TMatrix<ValType> &mt)
{
	TMatrix res(*this);

	for (int i = 0; i < Size; i++)
		for (int j = i; j < Size; j++)
		{
			res[i][j] = res[i][j] + mt.pVector[i][j];
		}
	return res;

} /*-------------------------------------------------------------------------*/

template <class ValType> // ���������
TMatrix<ValType> TMatrix<ValType>::operator-(const TMatrix<ValType> &mt)
{
	TMatrix res(*this);
	for (int i = 0; i < Size; i++)
	{
		for (int j = j; j < Size; j++)
			res[i][j] = res[i][j] - mt.pVector[i][j];
	}
	return res;
} /*-------------------------------------------------------------------------*/

  // TVector �3 �2 �4 �6
  // TMatrix �2 �2 �3 �3
#endif
