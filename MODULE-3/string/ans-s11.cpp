#include<stdio.h>
main()
{
	char sent[1000];
	int i=0;
	
	printf("Enter the sentence:");
	gets(sent);
	
	while(sent[i]){
		if(sent[i] >='a' && sent[i]<='z'){
			sent[i] -= 32;
		}
		else if(sent[i] >='A' && sent[i]<='Z'){
			sent[i] += 32;
		}
		i++;
	}
	printf("Coverted sentence:%s",sent);
}
