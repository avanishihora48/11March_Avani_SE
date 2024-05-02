#include<stdio.h>
main()
{
	float cel,far;
	printf("Enter temperature in fahrenheit:",far);
	scanf("%f",&far);
	cel = (far-32)*5/9;
	printf("The conversion of fahrenheit to celsius is:%.2f",cel);
	
}
