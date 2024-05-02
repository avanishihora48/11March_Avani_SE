#include<stdio.h>
main()
{
	int height;
	printf("Enter the persons height in cemtimeter:");
	scanf("%d",&height);
	if(height<150){
		printf("You are short.");
	}
	else if(height<170){
		printf("You are Average.");
	}
	else{
		printf("You are tall.");
	}
}
