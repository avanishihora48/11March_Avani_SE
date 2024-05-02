#include<stdio.h>
main()
{
	float p,r,t,CI,amount;
	printf("Enter principal amount: ");
	scanf("%f",&p);
	printf("Enter rate of interest (in percentage): ");
	scanf("%f",&r);
	printf("Enter time period(in years): ");
	scanf("%f",&t);
	
	r = r/100;
	amount = p*(1+r);
	CI = amount - p;
	
	printf("Compound interest = %.2f rs.",CI);
}
