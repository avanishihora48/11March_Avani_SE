#include<stdio.h>
main()
{
	int a,b;
	float ans;
	printf("Enter the value of A & B:",a,b);
	scanf("%d%d",&a,&b);
	printf("Addition of A and B is:%d",a+b);
	printf("\nSubstraction of A and B is:%d",a-b);
	printf("\nMultiplication of A and B is:%d",a*b);
	
	ans = float(a)/float(b);
	printf("\nDivision of A and B is:%f",ans);
	printf("\nModule of A and B is:%d",a%b);
}
