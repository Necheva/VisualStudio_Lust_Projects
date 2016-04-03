#include<stdio.h>
#include <math.h>
#include <string.h>
struct person
{
	char FIO[20];
	double mark;
    
} Rez ;

double search_max(struct person mass[],int n)
{
	int i;
	double max=0;
	for (i=0;i<n;++i)
	{	
		if(mass[i].mark>max)
			max=mass[i].mark;
	}
    return max; 
}
double search_min(struct person mass[],int n)
{
	int i;
	double min=10;
	for(i=0;i<n;i++)
	{
		if(mass[i].mark<min)
			min=mass[i].mark;
	}
	return min;
}
double search_sred(struct person mass[],int n)
{
	int i;
	double sum=0.0;
	for(i=0;i<n;i++)
	{
		sum=mass[i].mark+sum;
	}
	
	return sum/n;
}

main()
{
	int n;
	int i;
	double mark1;
	double sred,max,min;
	struct person mass[100];
	do{
	printf("enter the number of paricipants\n");
	scanf("%d",&n);}
	while(n<=0);

	printf("enter the name of the participants and the results\n");
	for (i=0;i<n;i++)
	{
		scanf("%s %lf",Rez.FIO,&mark1);
		Rez.mark= mark1;
		mass[i]=Rez;
	}
	printf("\n");
	max=search_max(mass,n);
	printf("max=%lf",max);
	printf("\n");
	min=search_min(mass,n);
	printf("min=%lf",min);
	printf("\n");
	sred=search_sred(mass,n);
	printf("sred=%lf",sred);
	printf("\n");
	return 0;
}
