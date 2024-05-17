#include<stdio.h>

int isPalindrome(int num){
	int reverse=0,original=num;
		
	while(num>0)
	{
		reverse = reverse*10 + num % 10;
		num /= 10;
	}
	return reverse == original;
}

main()
{
	int count = 0,num;
	while (count < 3){
		
	printf("Enter a number:");
	scanf("%d",&num);
		
	if(isPalindrome(num))
	{
		printf("%d is a palindrome.\n",num);
	}
	else
	{
		printf("%d is not a palindrome.\n",num);
	}
		count ++;
	}
}	


