﻿// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// utmatrix.h - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (21.04.2015)
//
// Верхнетреугольная матрица - реализация на основе шаблона вектора

#ifndef __TMATRIX_H__
#define __TMATRIX_H__

#include <iostream>

using namespace std;

const int MAX_VECTOR_SIZE = 100000000;
const int MAX_MATRIX_SIZE = 10000;

// Шаблон вектора
template <class ValType>
class TVector
{
protected:
	ValType *pVector;
	int Size;       // размер вектора
	int StartIndex; // индекс первого элемента вектора
public:
	TVector(int s = 10, int si = 0);
	TVector(const TVector &v);                // конструктор копирования
	~TVector();
	int GetSize() { return Size; } // размер вектора
	int GetStartIndex() { return StartIndex; } // индекс первого элемента
	ValType& operator[](int pos);             // доступ
	bool operator==(const TVector &v) const;  // сравнение
	bool operator!=(const TVector &v) const;  // сравнение
	TVector<ValType>& operator=(const TVector<ValType> &v);     // присваивание

																// скалярные операции
	TVector  operator+(const ValType &val);   // прибавить скаляр
	TVector  operator-(const ValType &val);   // вычесть скаляр
	TVector  operator*(const ValType &val);   // умножить на скаляр

											  // векторные операции
	TVector  operator+(const TVector &v);     // сложение
	TVector  operator-(const TVector &v);     // вычитание
	ValType  operator*(const TVector &v);     // скалярное произведение

											  // ввод-вывод
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
	if (s > MAX_MATRIX_SIZE) throw invalid_argument("MATRIX OWERFLOW");
	if (s < 0) throw invalid_argument("MATRIX NEGATIVE SIZE");
	if(si<0)throw invalid_argument("MATRIX NEGATIVE INDEX");
	//if(si> MAX_MATRIX_SIZE) throw invalid_argument("MATRIX NEGATIVE INDEX");
	Size = s;
	StartIndex = si;
	pVector = new ValType[Size];

} /*-------------------------------------------------------------------------*/

template <class ValType> //конструктор копирования
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

template <class ValType> // доступ
ValType& TVector<ValType>::operator[](int pos)
{
	if (pos >= StartIndex + Size) throw invalid_argument("POSITION > SIZE");
	if (pos < StartIndex) throw invalid_argument("POSITION < STARTINDEX");
	return pVector[pos - StartIndex];
} /*-------------------------------------------------------------------------*/

template <class ValType> // сравнение
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

template <class ValType> // сравнение
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

template <class ValType> // присваивание
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

template <class ValType> // прибавить скаляр
TVector<ValType> TVector<ValType>::operator+(const ValType &val)
{
	TVector res(*this);///////////////////////////////////////////////////////////////////////////////////////////////////////
	for (int i = StartIndex; i<Size + StartIndex; i++)
		res[i] = res[i] + val;
	return res;
} /*-------------------------------------------------------------------------*/

template <class ValType> // вычесть скаляр
TVector<ValType> TVector<ValType>::operator-(const ValType &val)
{
	TVector res(*this);///////////////////////////////////////////////////////////////////////////////////////////////////////
	for (int i = StartIndex; i<Size + StartIndex; i++)
		res[i] = res[i] - val;
	return res;
} /*-------------------------------------------------------------------------*/

template <class ValType> // умножить на скаляр
TVector<ValType> TVector<ValType>::operator*(const ValType &val)
{
	TVector res(*this);///////////////////////////////////////////////////////////////////////////////////////////////////////
	for (int i = StartIndex; i<Size + StartIndex; i++)
		res[i] = res[i] * val;
	return res;
} /*-------------------------------------------------------------------------*/

template <class ValType> // сложение
TVector<ValType> TVector<ValType>::operator+(const TVector<ValType> &v)
{

	if (Size == v.Size)
	{
		TVector<ValType> res(*this);///////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = StartIndex; i < Size + StartIndex; i++)
			res.pVector[i] = pVector[i] + v.pVector[i];
		return res;
	}
	else throw invalid_argument("ADD WITH NOT EQUAL SIZES");
} /*-------------------------------------------------------------------------*/

template <class ValType> // вычитание
TVector<ValType> TVector<ValType>::operator-(const TVector<ValType> &v)
{

	if (Size == v.Size)
	{
		TVector<ValType> res(*this);///////////////////////////////////////////////////////////////////////////////////////////////////////
		for (int i = StartIndex; i < Size + StartIndex; i++)
			res.pVector[i] = pVector[i] + v.pVector[i];
		return res;
	}
	else throw invalid_argument("SUBTRACT WITH NOT EQUAL SIZES");
} /*-------------------------------------------------------------------------*/

template <class ValType> // скалярное произведение
ValType TVector<ValType>::operator*(const TVector<ValType> &v)
{
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	ValType res = 0;
	if (Size == v.Size)
	{
		for (int i = 0; i < Size + StartIndex; i++)
			res += pVector[i] * v.pVector[i];
		return res;
	}
	else throw invalid_argument("SCALAR MULTIPLY WITH NOT EQUAL SIZES");
} /*-------------------------------------------------------------------------*/


  // Верхнетреугольная матрица
template <class ValType>
class TMatrix : public TVector<TVector<ValType> >
{
public:
	TMatrix(int s = 10);
	TMatrix(const TMatrix &mt);                    // копирование
	TMatrix(const TVector<TVector<ValType> > &mt); // преобразование типа
	bool operator==(const TMatrix &mt) const;      // сравнение
	bool operator!=(const TMatrix &mt) const;      // сравнение
	TMatrix& operator= (const TMatrix &mt);        // присваивание
	TMatrix  operator+ (const TMatrix &mt);        // сложение
	TMatrix  operator- (const TMatrix &mt);        // вычитание

												   // ввод / вывод
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
TMatrix<ValType>::TMatrix(int s) : TVector<TVector<ValType> >(s)// изменена строчка pVector = new TVector<ValType> [Size];
{
	Size = s;
	for (int i = 0; i<Size; i++)
	{
		pVector[i] = TVector<ValType>(Size - i, i);

	}
} /*-------------------------------------------------------------------------*/

template <class ValType> // конструктор копирования  
TMatrix<ValType>::TMatrix(const TMatrix<ValType> &mt) :    // изменен конструктор копирования
	TVector<TVector<ValType> >(mt) {}


template <class ValType> // конструктор преобразования типа
TMatrix<ValType>::TMatrix(const TVector<TVector<ValType> > &mt) :
	TVector<TVector<ValType> >(mt) {}

template <class ValType> // сравнение
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

template <class ValType> // сравнение
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

template <class ValType> // присваивание
TMatrix<ValType>& TMatrix<ValType>::operator=(const TMatrix<ValType> &mt)
{
	if (this != &mt)////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

template <class ValType> // сложение
TMatrix<ValType> TMatrix<ValType>::operator+(const TMatrix<ValType> &mt)
{

	if (Size != mt.Size)
		throw invalid_argument("h");
	TMatrix res(*this);

	for (int i = 0; i < Size; i++)
		for (int j = i; j < Size; j++)
		{
			res[i][j] = res[i][j] + mt.pVector[i][j];
		}
	return res;

} /*-------------------------------------------------------------------------*/

template <class ValType> // вычитание
TMatrix<ValType> TMatrix<ValType>::operator-(const TMatrix<ValType> &mt)
{
	if (Size != mt.Size)
		throw invalid_argument("h");

	TMatrix res(*this);
	for (int i = 0; i < Size; i++)
	for (int j = i; j < Size; j++)
			res[i][j] = res[i][j] - mt.pVector[i][j];
	return res;
} /*-------------------------------------------------------------------------*/

  // TVector О3 Л2 П4 С6
  // TMatrix О2 Л2 П3 С3
#endif

