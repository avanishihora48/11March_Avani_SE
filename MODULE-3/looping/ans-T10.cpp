#include<stdio.h>
main()
{
	int num,first,last,sum;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	first = num;
	while (first >= 10)
	{
		first /= 10;
	}
	
	last = num % 10;
	sum = first + last;
	printf("The summation of first and last digit of %d is:%d\n",num,sum);
}
