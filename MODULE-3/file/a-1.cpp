#include<stdio.h>
main()
{
	FILE*fl;
	fl = fopen("a-1.txt","a");
	char nm[20];
	printf("Enter your name: ");
	scanf("%s",&nm);
	printf("Name:%s",nm);
	fprintf(fl,"Name:%s",nm);
	fclose(fl);
}

