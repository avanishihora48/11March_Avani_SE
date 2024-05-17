#include<stdio.h>
main()
{
	int i=1,n,even=0,odd=0;

	while(i<=5){
		printf("Number %d:",i);
		scanf("%d",&n);
		
		if(n%2==0){
			even++;
			
		}else{
			odd++;
		}
		i++;
    }
		printf("Even numbers are:%d",even);      
		printf("\nOdd numbers are:%d",odd);       
		
}


