#include<stdio.h>
main()
{
	char s[1000],word[100]="is";
	int count=0,i;
	
	printf("Enter a string:");
	gets(s);
	
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='i' && s[i+1]=='s'){
			count++;
		}
		
	}
	printf("\nTotal number of is in a sentence are:%d",count);
	

}
