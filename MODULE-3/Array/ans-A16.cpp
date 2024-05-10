#include<stdio.h>
main()
{
	int n[5],i,sum=0;
	printf("Enter 5 number array:");
	for (i=0;i<5;i++){
		scanf("%d",&n[i]);
		sum += n[i];
	}
	for (i=0;i<5;i++){
         sum += n[i];
	}
	printf("sum of 5 array is:%d",sum);
}
