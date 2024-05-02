#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	if(ch >= 'A' && ch <= 'Z'){
		ch = ch + 32;
	}
	switch (ch) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is a vowel.",ch);
			break;
		default:
		
		if((ch >= 'a' && ch <= 'z')){
			printf("%c is a consonant",ch);
		}	
		else {
			printf("%c is not a valid alphabet",ch);
		}
		break;
	}
}
