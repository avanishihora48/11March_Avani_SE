#include<stdio.h>

main()
{
	int n,i,sum;
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("Series: ");
	for(i=1;i<=n;i++){
		printf("(%d*%d)",i,i);
		if(i != n){
			printf(" + ");
		}
	}
	printf("\n");
}
