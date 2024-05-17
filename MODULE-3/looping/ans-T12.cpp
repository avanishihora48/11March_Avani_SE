#include<stdio.h>
#include<math.h>

main()
{
	int num, original,remainder,result=0,n=0;
	
	printf("Enter an integer: ");
	scanf("%d",&num);
	original = num;
	
	for(original = num; original != 0; original /= 10,++n);
		original = num;
	
	
	for(;original != 0;original /= 10){
		remainder = original % 10;
		result += pow(remainder, n);
	}
	
	if(result == num){
		printf("%d is an armstrong number.\n",num);
	}
	else{
		printf("%d is not an armstrong number.\n",num);
	}
}
