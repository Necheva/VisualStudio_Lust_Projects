#include <iostream>
using namespace std;
//функция вычисления среднего значения
float sr_arifm(int *x, int n)
{
	int i; double s = 0;
	for (i = 0; i < n; i++)
		s = s + x[i];
	return (s / n);
}
//функция для определения простого числа 
bool prostoe(int n)
{
	if (n == 1)// единица не простое
		return false;
	for (int i = 2; i*i < n; i++)// начинаем искать делители с 2-ки
	{
		if (n%i == 0)
			return false;
	}
	return true;
}

//функция удаления элемента из массива
void dell(int *arr, int m, int &n)
{
	for (int i = m - 1; i < n - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	--n;

}
//функция сортировки массива
void upor(int *x, int n)
{
	int index;
	int zamena;
	for (int i = 0; i < n; i++)
	{
		int min = x[i];
		index = i;
		for (int j = i + 1; j < n; j++)
			if (x[j] < min)
			{
				min = x[j];
				index = j;
			}
		zamena = x[i];
		x[i] = min;
		x[index] = zamena;
	}
}

int main()
{
	int size;
	double average_value;
	cout << "input size of massiv: ";
	cin >> size;
	cout << endl;
	int* array = new int[size];
	cout << "input your massiv: ";
	for (int i = 0; i < size; i++)
	{
		cin >> *(array+i);
	}
	cout << endl;
	////////////////////////////////////////////
	cout << "your massiv: ";
	for (int i = 0; i < size; i++)
	{
		cout <<" "<< *(array + i);
	}
	cout << endl;
	average_value = sr_arifm(array, size);
	cout << "average value: " << average_value;
	cout << endl;
	////////////////////////////////////////////
	for (int i = 0; i < size; i++)
	{
		if (prostoe(*(array+i)) && *(array+i)<average_value)/////////???????????????????????????????????????????????????????

		{
			dell(array, *(array + i),size);/////////???????????????????????????????????????????????????????
		}
	}
	cout << "your massiv after delete value: ";
	for (int i = 0; i < size; i++)
	{
		cout << " " << *(array + i);
	}
	cout << endl;
	////////////////////////////////////////////
	upor(array, size);
	cout << "sort massiv: ";
	for (int i = 0; i < size; i++)
	{
		cout << " " << *(array + i);
	}
	cout << endl;
	return 0;
}