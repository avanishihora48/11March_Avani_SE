#include<stdio.h>
main()
{
	int i,j,count=65;
	for (i=65;i<=69;i++){
		for (j=65;j<=i;j++){
			printf("%c ",count);
			count++;
		}
		printf("\n");
	}
	
}
