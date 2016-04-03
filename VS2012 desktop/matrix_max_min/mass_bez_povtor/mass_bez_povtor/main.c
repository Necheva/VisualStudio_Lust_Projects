#include<stdio.h> 
#include<math.h> 
#include<conio.h> 
#include <locale.h>  
 
 
int MassivPovtor(int N,int arr[100])
{
	int i,j,k,n;
	n=N;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++) 
		{
			if (arr[i]==arr[j])
			{
				for (k=j;k<(n-1);++k)
				{
					arr[k]=arr[k+1];
				}
				--n; 
				j--;
			}   
		}
	}
    
	for (i=0;i<n;i++)
	{
		printf( "%i ",arr[i]);
	}
	printf("\n");
	return 0;
}
 
 
int SozdanieMassiva (int N,int arr[100] )
{
	int i;
	for (i=0;i<N;i++)
	{
		scanf("%i",&arr[i]);
	}
	return 0;
}
 
int main()
{ 
	int N,n;
	int arr[100];
	int i;
	setlocale(LC_CTYPE, "Russian");
	printf( "¬ведите длину массива\n");
	scanf("%i",&N);
	SozdanieMassiva(N,arr);
	MassivPovtor(N,arr);
	return 0;
}