#include<stdio.h>
#include<stdlib.h>
int zamena(int n,double **a,int i)
{
	int j;
	double *tmp;
	for(j=i+1;j<n;++j)
	{
		if(a[j][i]!=0)
		{
		  tmp=a[i];
		  a[i]=a[j];
		  a[j]=tmp;
		  return 0 ;
		}
	}	
	return 1;
}
void output_array(double *x,int n)
{
	int i;
	printf("\n");
	printf("array is:\n");
	printf("rezult is:  "); 
	for(i=0;i<n;++i)
	{
		printf("%lf\t",x[i]);	
	}
    printf("\n");
}
void output_matrix(double **a,int n)
{
	int i,j;
	printf("\n");
	printf("matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%lf\t",a[i][j]);
		printf("\n");
	}

}
double *gauss(int n,double **a,double *b)
{
	int ok;
	double d;
	double e;
	double ok1;
	double c[3][3];
	double z[3];
	double s;
	int i,j,k;
	
	double *x=(double *)malloc(n*sizeof(double));
    for(i=0;i<n;++i)
	{ 
	   for(j=0;j<n;++j)
	   {
	     c[i][j]=a[i][j];
	     z[i]=b[i];
	   }
     }
	for(i=0;i<n;++i)
	{
	  
       d=a[i][i];
	   if (d==0)
	   {
		 ok =   zamena(n,a,i);
		 if(ok!=0)
		 {
			 return NULL;
		 }
	   }
	   for(j=0;j<n;++j)
	   {
		   a[i][j]=a[i][j]/d;
	   }
	   b[i]=b[i]/d;
	   for(k=i+1;k<n;++k)
	   {
		   e=a[k][i]/a[i][i];
		   for(j=i;j<n;j++)// рпазобрать
		   {
			   a[k][j]=a[k][j]-a[i][j]*e;
		   }
		   b[k]=b[k]-b[i]*e;
	    }
	   output_matrix(a,n);
	 }
    
	 for(i=n-1;i>=0;i--)
	   {
		   x[i]=b[i];
		   for(j=i+1;j<n;++j)
		   {
			   x[i]=x[i]-x[j]*a[i][j];
		   }
	   }
	 
	 for(i=0;i<n;i++)
	 { 
	   s=0.0;
	   for(j=0;j<n;j++)
	   { 
		   s+=x[j]*c[i][j];
	   }
	   printf("\n"); 
	   printf("s=%lf=%lf",s,z[i]);
	 }
     printf("\nChecking converged\n");
	 return x;
}
double *input_array(int n)
{
	int i;
	double *b=(double *)malloc(n*sizeof(double));
	printf("input b[i]\n");
	for(i=0;i<n;++i)
	{
	   scanf("%lf",&b[i]);
	}
	return b;
}
double **input_matrix(int n)
{
	int i,j;
	double **a=(double**)malloc(n*sizeof(double*));
    printf("input a[m,n]\n");
	for(i=0;i<n;++i)
	{
		a[i]=(double*)malloc(n*sizeof(double));
		for(j=0;j<n;++j)
		{
			scanf("%lf",&a[i][j]);
		}
	}
	return a;
}
int main()
{
	int n=2,m,i,j;
	double **a=input_matrix(n);
	double *b=input_array(n);
	double *x=gauss(n,a,b);
	if(x==NULL)
		printf("no solution\n");
	else
	    output_array(x,n);
	return 0;
}