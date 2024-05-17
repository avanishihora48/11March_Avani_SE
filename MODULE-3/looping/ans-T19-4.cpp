#include<stdio.h>
main()
{
	int i,j,r=11;
	for(i=1;i<=r;i++){
		for(j=1;j<=i;j++){
			    printf("* ");
		    }
		    printf("\n");
	    }
		for(i=r-1;i>=1;i--){
			for(j=1;j<=i;j++){
				printf("* ");
			}
			printf("\n");
		}
}
