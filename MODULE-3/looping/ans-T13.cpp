#include<stdio.h>
main()
{
	int num, fact = 1,i;
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num<0){
		printf("Factorial is not for negative numbers");
	}else {
		while(i<=num){
			fact = fact * i;
			i++;
		}
		printf("Factorial of the %d! is %d",num,fact);
	}
	
}
