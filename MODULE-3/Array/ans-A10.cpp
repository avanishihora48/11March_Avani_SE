#include<stdio.h>

main()
{
	int i,n,r,s=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=n;i>0; ){
		r=i%10;
		s=s*10+r;
		i=i/10;
	}
	if(s==n){
		printf("\n%d is a palindrome",n);
	}else{
		printf("\n%d is not a palindrome ",n);
	}
}
