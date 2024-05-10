#include<stdio.h>
#include<string.h>
main()
{
	int i,n[5];
	
	for (i=1;i<=5;i++)
	{
	    printf("Enter numbers:");
	    scanf("%d",&n[i]);
	}
	for (i=5;i>=1;i--)
	{
	    printf("\nReverse number is:%d",n[i]);
	}

}
