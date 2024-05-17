#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	printf("Enter the number:");
	while(i<=10){
	  scanf("%d",&n);
		sum += n;
		i++;
	}
	printf("Sum of 10 digits are:%d",sum);
}
