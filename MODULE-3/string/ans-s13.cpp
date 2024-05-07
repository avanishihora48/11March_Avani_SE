#include<stdio.h>

void remove(char str[100]){
	int i,j;
	for(i=0,j=0;str[i];i++){
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A'&& str[i]<='Z')){
				str[j++] = str[i];
			}
		}
	str[j]='\0';
}

main()
{
	char str[100];
	
	printf("Enter a string:");
	gets(str);
	
	remove(str);
	printf("String after removing non-alphabetic characters:%s",str);
}
