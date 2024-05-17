#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=10;j++){
			printf("%2d ",(i-1)*10+j);
		}
		printf("\n");
	}
}
