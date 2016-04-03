#include<stdio.h>
#include<stdlib.h>
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
	   for(j=0;j<n;++j)
	   {
		   a[i][j]=a[i][j]/d;
	   }
	   b[i]=b[i]/d;
	   for(k=i+1;k<n;++k)
	   {
		   e=a[k][i]/a[i][i];
		   for(j=i;j<n;j++)
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
int main()
{
	int n=3;
	double **a;
	double *b;
	int i,j;
	double *x;
	FILE *in= fopen("first.txt", "rt");
	FILE *put=fopen("second.txt", "rt");
	FILE *out=fopen("rezalt.txt", "wt");
	a=(double**) malloc(n*sizeof(double*));
	for(i=0; i<n; i++)
	{
		a[i]=(double*)malloc(n*sizeof(double));
		for(j=0; j<n; j++)
		{
			fscanf(in,"%lf",&a[i][j]);
		}
	}
	b=(double*) malloc(n*sizeof(double));
	for(i=0; i<n; i++)
	{
		fscanf(put,"%lf",&b[i]);
	}
	x = gauss(n,a,b);
	for (i=0;i,i<n;i++)
	{
		fprintf(out,"%lf\t",x[i]);
	}
	fclose(in);
	fclose(put);
	fclose(out);
	for(i=0;i<n;i++)
	{
			free(a[i]);
	}
	free(a);
	free(b);
	free(x);
	return 0;
}
