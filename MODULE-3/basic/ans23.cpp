#include<stdio.h>
main()
{
	float n1,n2;
	
	printf("Enter first number: ");
	scanf("%f",&n1);
	printf("Enter second number: ");
	scanf("%f",&n2);
	
	n1 = n1 * n2;
	n2 = n1 / n2;
	n1 = n1 / n2;
	
	printf("After swapping:");
	printf("\nFirst number:%.2f",n1);
	printf("\nsecond number:%.2f\n",n2);
	
	

}



	
