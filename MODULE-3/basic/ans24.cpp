#include<stdio.h>
main()
{
	char id[10],employee[100];
	float emp1,emp2,emp3,emp4,emp5,avg;
	printf("Enter employee 1 name:",id);
	scanf("%s",&id);
	
	printf("Enter employee 1 salary:",emp1);
	scanf("%f",&emp1);
	
	printf("Enter employee 2 name:",id);
	scanf("%s",&id);
	
	printf("Enter employee 2 salary:",emp2);
	scanf("%f",&emp2);
	
	printf("Enter employee 3 name:",id);
	scanf("%s",&id);
	printf("Enter employee 3 salary:",emp3);
	scanf("%f",&emp3);
	
	printf("Enter employee 4 name:",id);
	scanf("%s",&id);
	
	printf("Enter employee 4 salary:",emp4);
	scanf("%f",&emp4);
	printf("Enter employee 5 name:",id);
	scanf("%s",&id);
	
	printf("Enter employee 5 salary:",emp5);
	scanf("%f",&emp5);
	
	avg=(emp1+emp2+emp3+emp4+emp5)/5;
	printf("Average of 5 employee is:%.2f",avg);
	
}
