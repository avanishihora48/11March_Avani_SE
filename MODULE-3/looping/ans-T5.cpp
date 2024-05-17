#include<stdio.h>
main()
{
	int num, fact = 1;
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("Factorial is not for negative numbers");
	}
	else 
	{
		for(int i=1;i<=num;i++)
		{
			fact = fact * i;
		}
		printf("Factorial of the %d is %d",num,fact);
	}
	
}
