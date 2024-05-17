#include<stdio.h>
main()
{
	int n,r,i,reverse=0;
	printf("Enter your number:");
	scanf("%d",&n);
	for(; n!=0 ;n/=10){
		
		r = n % 10;
		reverse = reverse*10 + r;
	}
	printf("Reverse number:%d\n",reverse);
}
