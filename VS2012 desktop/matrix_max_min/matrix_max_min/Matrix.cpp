#include "Matrix.h"
#include<stdlib.h>
#include<iostream>

using namespace std;

Matrix::Matrix(int M=0,int N=0)
{
	n=N;
	m=M;
	if((n==0)&&(m==0))
		a=NULL;
	else{
		a=(double**)malloc(m*sizeof(double*));
			for(int i=0;i<m;i++)
			{
				a[i]=(double*)malloc(n*sizeof(double));
			}
	}
}


Matrix::~Matrix(void)
{
	for(int i=0;i<m;i++)
	{
		free(a[i]);
	}
	free(a);
	a=NULL;
}

void Matrix :: Input(void)
{
	cout<<"enter the matrix"<<endl;
	for (int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		
	}
}
void Matrix:: Print(void)
{
	cout<<"your matrix is:"<<endl;
	for (int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<" "<<a[i][j];
		}
	cout<<"\n";
	}
}
number Matrix:: min_max()
{
	number g;
	int i,j,s;
	for (i=0;i<m;i++)
	{
		s=1;
		for (j=1;j<n;j++)
		{
			if(a[i][j]<a[i][s])
				s=j;
		}
	}
	int f=1;
	for(int k=0;k<m;k++)
	{
		if(a[k][s]>a[i][s])
			f=0;
	}
	return g;
}
