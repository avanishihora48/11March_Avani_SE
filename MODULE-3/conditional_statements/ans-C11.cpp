#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of A:");
	scanf("%d",&a);
	
	if(a%2 == 0){
		printf("Your number is even.");
	}else{
		printf("Your number is odd");
	}
}
