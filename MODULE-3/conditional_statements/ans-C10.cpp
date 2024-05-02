#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value of A :");
	scanf("%d",&a);
	
	if(a>0){
		printf("The number is positive");
	}
	else if(a==0){
		printf("The number is zero");
	}
	else{
		printf("The number is negative");
	}
}
