#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	printf("Enter number upto you want the summation:");
	scanf("%d",&n);
	
		while(i<=n){
		    sum += i;
		    i++;
        }
	printf("The summation upto given natural number is:%d",sum);
}
