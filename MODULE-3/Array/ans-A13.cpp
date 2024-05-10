#include<stdio.h>
int main()
{
	int n[5],i;
	printf("Enter 5 numbers:\n");
	for(i=0;i<5;i++){
		scanf("%d",&n[i]);
	}
	
	printf("Status:");
	for(i=0;i<5;i++){
		if(n[i]%2==0){
			printf("\n%d is even",n[i]);
		}
		else{
			printf("\n%d is odd",n[i]);
		}
	}
}
