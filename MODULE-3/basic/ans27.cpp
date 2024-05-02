#include<stdio.h>
main()
{
	int days;
	float months;
	
	printf("Enter the number of days:",days);
	scanf("%d",&days);
	
	months = days/30.44;
	printf("The days can be converted into months:%.2f",months);
}
