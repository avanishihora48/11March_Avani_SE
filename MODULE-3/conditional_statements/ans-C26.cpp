#include<stdio.h>
main()
{
	int unit;
	float total;
	printf("Enter your electricity consumption:");
	scanf("%d",&unit);
	if(unit<=50){
		total = unit * 0.5;
	}
	else if (unit<=150){
		total = (50*0.5) + ((unit-50)*0.75);
	}
	else if (unit<=250){
		total = (50*0.5) + (100*0.75) + ((unit-150)*1.20);
	}
	else {
		total = (50*0.5) + (100*0.75) + (100*1.20) + ((unit-250)*1.50);
	}
	total = total+ total*0.2;
	printf("Your total bill is:Rs.%.2f",total);
}
