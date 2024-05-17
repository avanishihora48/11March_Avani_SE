#include<stdio.h>
main()
{
	int i,n[5];
	printf("Enter number:\n");
	for(i=0;i<5;i++)
	{
		printf("Number %d:",i+1);
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("numbers is:%d\n",n[i]);
	}
	
}
