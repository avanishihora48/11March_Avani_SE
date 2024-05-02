#include<stdio.h>
main()
{
	char ch;
	printf("Enter any character:");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z')||(ch>='A' && ch <='Z')){
		printf("Your character is an Alphabet");
		if(ch>='a'&& ch<='z'){
			printf("\nYour alphabet is lowercase.");
		}
		else{
			printf("\nYour alphabet is Uppercase.");
		}
		
	}else if(ch>='0' && ch<='9'){
		printf("Your character is digit.");
	}
	else{
		printf("Your character is special alphabet.");
	}
}
