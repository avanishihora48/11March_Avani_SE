#include<stdio.h>
main()
{
	int n1,n2,choice;
	float ans;
	printf("Enter the value of n1 and n2:");
	scanf("%d%d",&n1,&n2);
	
	printf("\n 1.Addition");
	printf("\n 2.Substraction");
	printf("\n 3.Multiplication");
	printf("\n 4.Division");
	printf("\n 5.Modulo");
	
	printf("\n Enter your choice from above:");
	scanf("%d",&choice);
	
	
	if(choice==1){
		printf("Addition of n1 and n2 is:%d",n1+n2);
	}
	else if(choice==2){
		printf("Substraction of n1 and n2 is:%d",n1-n2);
	}
	else if(choice==3){
		printf("Multiplication of n1 and n2 is:%d",n1*n2);
	}
	else if(choice==4){
		ans=float(n1)/float(n2);
		printf("Division of n1 and n2 is:%.2f",ans);
	}
	else{
		printf("modulo of n1 and n2 is:%d",n1%n2);
	}
	
}
