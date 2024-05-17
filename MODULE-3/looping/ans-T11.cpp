#include<stdio.h>
main()
{
	int i;
	char nm[5][20];
	for (i=0;i<5;i++){
		printf("Enter your name:");
		scanf("%s",&nm[i]);
    }
    for (i=0;i<5;i++){
		printf("\nName:%s",nm[i]);
		
    }
}
