#include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("Series: ");
	for(i=1;i<=n;i++)
	{
		if(i>1)
		{
			printf(" + ");
		}
		printf("(");
		
	for(j=1;j<=i;j++)
	{
		printf("%d",j);
		if(j<i)
		{
			printf(" + ");
		}
	}
	printf(")");
	}
	printf("\n");
  }

