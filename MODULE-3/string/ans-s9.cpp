#include<stdio.h>
main()
{
	char str[100];
	int length,i;
	
	printf("Enter a string:");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]!='\n' && str[i]!=' '){
			length++;
		}
	}
	printf("Maximum number of characters in string:%d",length);
}
