#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of A,B and C:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c){
		printf("Value of A is maximum");
	}
	else if(b>c && b>a){
		printf("Value of B is maximum");
	}
	else{
		printf("Value of C is maximum");
	}
}
