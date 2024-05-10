#include<stdio.h>

int m1(int n)
{
	if(n<=1)
	return 1;
	else
	return n*m1(n-1);
}
int main()
{
	int n,f;
	printf("Enter any number: ");
	scanf("%d",&n);
	f = m1(n);
	printf("factorial is %d",f);
m1(n);
}
