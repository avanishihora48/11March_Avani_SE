#include<stdio.h>
 main()
{
	int a,ins,loan,sal;
	printf("Enter your annual salary:",a);
	scanf("%d",&a);
	ins = a*0.1;
	printf("\nYour insurance premium is:%d",ins);
	loan = a*0.1;
	printf("\n Your loan installment is:%d",loan);
	sal = a-ins-loan;
	printf("\nYour remaining salary is:%d",sal);
	
}
