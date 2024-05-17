#include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter the tables you want to print:");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		printf("Multiplication table for %d:\n",i);
		for(j=1; j<=10; j++)
		{
			printf("%d*%d=%d\n",i,j,i*j);
		}
		printf("\n");
	}

}
