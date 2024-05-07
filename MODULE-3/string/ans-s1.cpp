#include<stdio.h>
main()
{
	char str[100];
	int l=0,i;
	printf("Enter string:");
	scanf("%s",&str);
	
	while(str[l] != '\0'){
		l++;
	}
	printf("length of the string:%d\n",l);
}
