#include<stdio.h>
main()
{
	int years,months;
	float days;
	printf("Enter the number of years:",years);
	scanf("%d",&years);
	
	months = years*12;
	days = years*365;
	printf("\nThis years have number of months:%d",months);
	printf("\nThis years have number of days:%.2f",days);
}
