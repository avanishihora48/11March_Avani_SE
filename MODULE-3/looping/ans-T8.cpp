#include<stdio.h>

int findMax(int n){
	int max = n % 10;
	
	while (n != 0){
		int d = n % 10;
		
		if (d > max){
			max = d;
		}
		n /= 10;
	}
	return max;
}
main()
{
	int n,find;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	int max = findMax(n);
	printf("Max number is %d",max);
}
