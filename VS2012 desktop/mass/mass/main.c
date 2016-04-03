#include<stdio.h>
#include<string.h>
int main()
{
	int i,n=6;
	char str1[100];
	char str2[100];
	printf("enter str1\n");
    for(i=0;i<n;++i)
		scanf("%c",&str1[i]);
	printf("");
	printf("enter str2\n");
	for(i=0;i<n;++i)
		scanf("%c",&str2[i]);
	printf("");
	if(strcmp(str1,str2)==0)
		printf("odinakov");
	if(strcmp(str1,str2)==1)
		printf("str1 > str2");
	if(strcmp(str1,str2)==-1)
		printf("str1 < str2");
	printf("\n");
	return 0;
}