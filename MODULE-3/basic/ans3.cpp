#include<stdio.h>

float pi = 3.14;
main()
{
	float r,area,cir;
	printf("Enter the value of r:",r);
	scanf("%f",&r);
	area = pi*r*r;
	cir = 2*pi*r;
	printf("The area of circle is:%.2f",area);
	printf("\nThe circumference of circle is:%.2f",cir);
}
