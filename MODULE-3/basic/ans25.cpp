#include<stdio.h>
main()
{
	int a,b,c,d,e,avg;
	printf("Enter expense no.1:",a);
	scanf("%d",&a);
	printf("\nEnter expense no.2:",b);
	scanf("%d",&b);
	printf("\nEnter expense no.3:",c);
	scanf("%d",&c);
	printf("\nEnter expense no.4:",d);
	scanf("%d",&d);
	printf("\nEnter expense no.5:",e);
	scanf("%d",&e);
	
	avg = (a+b+c+d+e)/2;
	printf("Average of expenses is:%d",avg);
}
