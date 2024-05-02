#include<stdio.h>
main()
{
	char ch, prevChar = ' ';
	printf("Enter school's name: ");
	
	while((ch = getchar()) != '\n'){
		
		if (prevChar == ' '){
			printf("%c",ch);
		}
		prevChar = ch;
	}
	
	printf("\n");
}
