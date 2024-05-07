#include<stdio.h>
main()
{
	char str[100];
	int i;
	printf("Enter string:");
	scanf("%s",&str);
	printf("individual character of the string is:\n");
	for(i=0;str[i] != '\0';i++){
		printf("%c\n",str[i]);
	}
	printf("Individual character in reverse order is:\n");
	for(i=i-1;i>=0;i--){
		printf("%c\n",str[i]);
	}
}
