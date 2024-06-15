#include<stdio.h>
main()
{
	FILE*fl;
	fl = fopen("a-3.txt","a");
	int n;
	
	printf("Enter value: ");
	scanf("%d",&n);
	
	if(n % 2 == 0)
	{
		printf("Even value");
		fprintf(fl,"\nValue is:%d",n);
		fprintf(fl,"\nNumber is Even");
	}
	else
	{
		printf("Odd value");
		fprintf(fl,"\nValue is:%d",n);
		fprintf(fl,"\nNumber is odd");
	}
	fclose(fl);
}
