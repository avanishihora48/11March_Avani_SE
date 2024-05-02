#include<stdio.h>
main()
{
	int months,days;
	printf("Enter the month number:");
	scanf("%d",&months);
	
	if(months<1 || months>12){
		printf("Invalid month number");
	}
	else{
		switch(months){
			case 2:
				days=28;
				break;
			case 4:
				days=30;
				break;
			case 6:
				days=30;
				break;
			case 9:
				days=30;
				break;
			case 11:
			    days=30;
				break;
			default:
			    days=31;		
		}
		printf("The number of days in a month is:%d",days);
	}
}
