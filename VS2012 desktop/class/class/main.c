#include<stdio.h>
int main()
{
	FILE *in= fopen("input.txt", "rt");
	FILE *out= fopen("output.txt","wt");
	char buf[1024];
	char outbuf[1024];
	int c=0;

	while(fgets (buf,1023,in))  
	{
		outbuf[c]=buf[0];
		c++;
	}
	outbuf[c]=0;
	fclose(in);
	fprintf(out,"%s",outbuf);
	fclose(out);
	return 0;
}  