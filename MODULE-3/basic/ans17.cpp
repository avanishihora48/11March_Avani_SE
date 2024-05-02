#include<stdio.h>
main()
{
	float salary,premium;
	printf("Enter your salary:");
	scanf("%f",&salary);
	
	if(salary<20000){
		premium = salary * 0.1;
	}else if (salary>=20000 && salary < 50000){
		premium = salary*0.15;
	}else {
		premium = salary*0.2;
	}
	
	printf("Your insurance premium based on salary is:%.2f",premium);
}
