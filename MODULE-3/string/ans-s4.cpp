#include<stdio.h>
main()
{
	char str[100];
	int words=0,i;
	printf("Enter the sentence:");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '|| str[i]=='\n'){
			words++;
		}
	}
	words++;
	printf("The number of words in a sentence are:%d",words);
}
