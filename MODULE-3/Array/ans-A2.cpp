#include<stdio.h>
main()
{
	int choice,n1,n2;
	float ans;
	printf("Enter number 1:");
	scanf("%d",&n1);
	printf("Enter number 2:");
	scanf("%d",&n2);
	
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\nEnter your choice from above:");
	scanf("%d",&choice);
	switch(choice){
		case 1 :
			printf("\nAddition is:%d",n1+n2);
			break;
		case 2 :
			printf("\nSubstraction is:%d",n1-n2);
			break;
		case 3 :
			printf("\nMultiplication is:%d",n1*n2);
			break;
		case 4 :
			ans = float(n1)/float(n2);
			printf("\nDivision is:%.2f",ans);
			break;	
		default:
			printf("\nError!..please enter valid number..");
			break;
	}
}
