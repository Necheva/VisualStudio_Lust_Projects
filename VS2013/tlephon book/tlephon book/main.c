#include<stdio.h>
#include <math.h>
#include <string.h>
#include<locale.h>

struct person
{
	char FIO[20];
	char mark[20];

} Rez;

main()
{
	setlocale(LC_ALL, "Russian");
	FILE *in = fopen("telephon_book.txt","a");
	int n,d;
	int i;
	int mark;
	struct person mass[100];

	
	

	printf("сколько человек вы хотите дописать\n");
	scanf("%d", &n);
	printf("\n");
	

	do
	{
		printf("записать ?\n");
		printf("1) да,записать\n");
		printf("2) нет, прекратить запись\n");
		scanf("%d", &d);
		if (d == 1)
		{
			printf("Сколько?\n");
			scanf("%d", &n);
			for (i = 0; i < n; i++)
			{
				scanf("%s %s", mass[i].FIO, mass[i].mark);
			}
		}
	} while (d != 2);
	for (i = 0; i < n; i++)
	{
		fscanf(in, "%s %s", mass[i].FIO, mass[i].mark);
	}
	for (i = 0; i<n; i++)
	{
		
		fprintf(in, "%s %s \n ", mass[i].FIO, mass[i].mark);

	}
	fclose(in);
	return 0;
}
