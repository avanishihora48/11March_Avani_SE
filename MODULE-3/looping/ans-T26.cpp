#include<stdio.h>
main()
{
	int n,i;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	printf("Series: ");
	for(i=1;i<=n;i++)
	{
		if(i>1)
		{
			printf(" ");
		}
		if(i % 2 == 0)
		{
			printf("- %d/%d",i,i+1);
		}
		else{
			if(i>1){
				printf("+");
			}
			printf(" %d/%d",i,i+1);
		}
	}
	printf("\n");
}
