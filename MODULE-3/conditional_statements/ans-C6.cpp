#include<stdio.h>
main()
{
	char ch;
	printf("Print any character:");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
		printf("Your character is vowel");
	}else{
		printf("Your character is not vowel");
	}
}
