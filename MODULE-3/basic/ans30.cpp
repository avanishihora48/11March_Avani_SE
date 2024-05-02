#include<stdio.h>
main()
{
	float y,d;
	printf("Enter the number of days:",d);
	scanf("%f",&d);
	y = d/365;
	printf("\nThe number of days in year are:%f",y);
	printf("\nEnter the number of years:",y);
	scanf("%f",&y);
	d = y*365;
	printf("\nThe year contain days are:%f",d);
}
