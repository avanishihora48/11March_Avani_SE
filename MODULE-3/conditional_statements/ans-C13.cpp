#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value of A,B and C:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c){
		printf("A is minimum");
	}
	else if(b<a && b<c){
		printf("B is minimum");
	}
	else{
		printf("C is minimum");
	}
}
