#include<stdio.h>
void factorial(int n){
	int fact = 1,i;
	
	for(i=1;i<=n;i++){
		fact *= i;
	}
	printf("factorial of %d! = %d\n\n",n,fact);
}
main()
{
	int n,fact = 1,i;
	
	for (i=1;i<=5;i++){
		printf("Enter the number: ");
		scanf("%d",&n);
		factorial(n);
	}
	
}
