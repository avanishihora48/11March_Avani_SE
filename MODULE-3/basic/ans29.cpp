#include<stdio.h>
main()
{
	int min,sec;
	float hours;
	
	printf("Enter Minutes:",min);
	scanf("%d",&min);
	
	sec = min*60;
	hours = (float)min/60;
	printf("\nThe number of minutes into second is:%d",sec);
	printf("\nThe number of mintues into hours is:%.2f",hours);
	
	
}
