#include<stdio.h>
main()
{
	int sal,hra,da,amount;
	printf("Enter Your salary:");
	scanf("%d",&sal);
	if(sal<=10000){
		hra=sal*0.20;
		da=sal*0.80;
	}
	else if(sal<=20000){
		hra=sal*0.25;
		da=sal*0.90;
	}
	else{
		hra=sal*0.30;
		da=sal*0.95;
	}
	amount=sal+hra+da;
	printf("Gross salary is:%d",amount);
}
