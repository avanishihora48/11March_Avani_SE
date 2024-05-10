#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char nm[5][50];
	printf("Enter name of 5 students name:\n");
	
	for(i=0;i<5;i++){
		printf("Enter name %d: ",i+1);
		scanf("%s",&nm[i]);
	}
	printf("\nNames of 5 students are:");
	for(i=0;i<5;i++){
		printf("\n%s",nm[i]);
		
	}
}
