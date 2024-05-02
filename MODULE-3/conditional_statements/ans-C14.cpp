#include<stdio.h>
main()
{
	float n1,n2,n3;
	printf("Enter the value of n1,n2 and n3:");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3){
	 	printf("number one is the largest");
	}
	else if(n2>n3 && n2>n1){
		printf("number two is largest");
	}
	else{
		printf("number three is the largest");
	}
	 
}
