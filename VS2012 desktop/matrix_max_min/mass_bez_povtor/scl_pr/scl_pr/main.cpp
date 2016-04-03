#include<iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#define M 4
#define N 5
void random_matr(int a[M][N],int min,int max);
void print(int a[M][N]);
void scl_pr(int a[M][N]);

int main()
{
	
	int a[M][N];
	random_matr(a,1,5);
	print(a);
	scl_pr(a);
	print(a);
	return 0;
}

void random_matr(int a[M][N],int min,int max)
{
	srand(time(NULL));
	for (int i = 0; i < M; i++)
	{
		for(int j=0;j<N;j++)
		{
			a[i][j] = min+rand()%(max-min); 
		}
	}	
}

void print(int a[M][N])
{
	cout<<"matrix :\n";
	for (int i = 0; i < M; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cout << a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}

void scl_pr(int a[M][N])
{
	int i1,i2,j,i,q,z;
	int max=-99999;
	int pr;
	for(i1=0;i1<(M-1);i1++)
	{
		
		for(i2=i1+1;i2<M;i2++)
		{
			int sum=0;
			for(j=0;j<N;j++)
			{
			  sum=sum + a[i2][j]*a[i1][j];
			}
			
			if(sum>max)
			{
				max=sum;
				q=i1;
				z=i2;
			}
			
		}
	}
		cout<<"q= "<<q<<" z="<<z;
		cout<<endl;
		for(j=0;j<N;j++)
		{
			int x=a[q][j];
			a[q][j]=a[z][j];
			a[z][j]=x;
		}
	
}