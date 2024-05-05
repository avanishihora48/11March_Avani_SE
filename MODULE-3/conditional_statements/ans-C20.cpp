#include<stdio.h>
main()
{
	int ID;
	char name[10];
	float unit,total,charge,amount;
	
	printf("Enter your name:");
	scanf("%s",&name);
	printf("Enter your ID:");
	scanf("%d",&ID);
	printf("Enter the Unit consumed:");
	scanf("%f",&unit);
	
	if(unit<=350){
		charge=1.20;
	}
	else if(unit>=350 && unit<600){
		charge = 1.50;
	}
	else if(unit>600 && unit<800){
		charge = 1.80;
	}
	else{
		charge = 2.00;
	}
	total = unit*charge;
	if(total>800){
		total += total*0.18;
		
	}
	if(total<256){
		total = 256;
	}
	printf("\nCustomer ID:%d",ID);
	printf("\nCustomer Name:%d",name);
	printf("\nUnit consumed:%.2f",unit);
	printf("\nCharge per unit:%.2f",charge);
	printf("\nTotal amount to be paid:%.2f",total);
}
