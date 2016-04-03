#include "TStack.h"
#include <iostream>
#include <cstring>
#include<ctype.h>
using namespace std;

const int Max_Size_String = 100;

int prior(char s);
double calc(char * str);
int perform(char, int, int);
int bracket(char * str);

void poland(char * str, char * result)
{
	TStack stack;
	int stri = 0, i = 0;
	while (str[i] != NULL)
	{
		while ((str[i] <= '9') && (str[i] >= '0'))
		{
			result[stri++] = str[i++];
			if ((str[i] > '9') || (str[i] < '0')) result[stri++] = ' ';
		}
		if ((str[i] == '(') || (str[i] == ')') || (str[i] == '*') || (str[i] == '/') || (str[i] == '-') || (str[i] == '+'))
		{
			if ((stack.isEmpty()) || (prior(str[i]) == 0) || (prior(str[i]) > prior(stack.Peek()))&& (str[i]!=')'))
			{
				stack.put(str[i]);
			}
			else if (str[i] == ')')
			{
				while (stack.Peek() != '(')
					result[stri++] = stack.Get();
				stack.Get();
			}
			else
			{
				while (!stack.isEmpty())
					result[stri++] = stack.Get();
				stack.put(str[i]);
			}
			i++;
		}

	}
	while (!stack.isEmpty())
		result[stri++] = stack.Get();
}



int main()
{
	double res = 0.0;
	char str[Max_Size_String],paul[Max_Size_String] = " ";
	cout << "enter your formula : ";
	cin >> str;
	if (bracket(str) == 0)
	{
		poland(str, paul);
		cout<<paul<<endl;
		res = calc(str);
		cout << "your result is: " << res << endl;
	}
  //  cout << "wrong bracket: " << bracket(str) << endl;
	return 0;
}

int prior(char s)
{
	if (s == '(')
		return 0;
	if (s == ')')
		return 1;
	if ((s == '+')||(s=='-'))
		return 2;
	if ((s == '*') || (s == '/'))
		return 3;
	else
	{
		return -1;
	}
}

double calc(char * str)
{
	TStack A;//числа
	TStack B;//операции

	int result = 0, elem;
	int LastOp;
	int  a;
	int i = 0;

	while (str[i] != '\0')
	{
		while ((str[i] != '*') && (str[i] != '/') && (str[i] != '-') && (str[i] != '+')&&(str[i]!='(') && (str[i] != ')'))
		{
			elem = 0;
			while (isdigit (str[i]))
				elem = elem * 10 + (str[i++] - 48);
			cout << elem<<endl;
			A.put(elem);
			//i++;
			if (str[i] == '\0')
				break;
		}
		if (str[i] == '\0')
			break;

		if (str[i] == '(')
		{
			B.put(str[i]);
			i++;
			continue;
		}
		if (str[i] == ')')
		{
			if (B.isEmpty())
			{
				cout << "warning";
				return 0;
			}
			
			LastOp = B.Get();
			while (LastOp!='(')
			{
				int Op2 = A.Get();
				int Op1 = A.Get();
				int result = perform(LastOp, Op1, Op2);
				A.put(result);

				if (B.isEmpty())
				{
					cout << "warning";
					return 0;
				}
				LastOp = B.Get();
			}
			i++;
			continue;
		}

		if (B.isEmpty())
			B.put(str[i]);
		else
		{
			LastOp = B.Peek();
			if (prior((char)LastOp) < prior(str[i]))
			{
				B.put(str[i]);
			}
			else
			{
				LastOp = B.Get();
				int Op2 = A.Get();
				int Op1 = A.Get();
				int result = perform(LastOp, Op1, Op2);
				A.put(result);
				B.put(str[i]);
			}
		}
		i++;
	}

	while (!B.isEmpty())
	{
		LastOp = B.Get();
		int Op2 = A.Get();
		int Op1 = A.Get();
		int result = perform(LastOp, Op1, Op2);
		A.put(result);
	}

	return A.Get();
}

int perform(char str, int Op1, int Op2)
{
	int result=0;

	if (str == '*')
	{
		result = Op1*Op2;
	}
	if (str == '/')
	{
		if (Op2 == 0)
		{
			cout << "Divide by 0" << endl;
		}
		else
			result = Op1 / Op2;
	}
	if (str == '+')
	{
		result = Op1+Op2;
	}
	if (str == '-')
	{
		result = Op1-Op2;
	}
	return result;
}

int bracket(char * str)
{
	TStack s;
	int array[Max_Size_String][2];
	int n = 0;//////
	int j = 0;//////
	int m = 1;//////
	int errors = 0;
	int size = strlen(str);

	for (int i = 0; i < size; i++)
	{
		if (str[i] == '(')
		{
			s.put(m++);////// m++?
		}
		if (str[i] == ')')
			if (!s.isEmpty())
			{
				n++;
				array[j][0] = s.Get();//////
				array[j++][1] = m++;//////
			}
			else
			{
				n++;
				array[j][0] = 0;
				array[j++][1] = m++;
				++errors;
			}
	}
	while (!s.isEmpty())
	{
		n++;
		array[j][0] = s.Get();//////
		array[j++][1] = 0;
		errors++;
	}
		for (int i = 0; i < n; i++)
		{
			cout<< array[i][0];
			cout<<" "<< array[i][1]<<"\n";
		}
	
	return errors;
}


