#include<stdio.h>
main()
{
	char s[100];
	int al=0,d=0,sp=0,i;
	
	printf("Enter a string:");
	scanf("%s",&s);
	
	for(i=0;s[i]!='\0';i++){
		if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
			al++;
		}
		else if(s[i]>='0' && s[i]<='9'){
			d++;
		}
		else{
			sp++;
		}
	}
	printf("\nTotal number of alphabets are:%d",al);
	printf("\nTotal number of digits are:%d",d);
	printf("\nTotal number of special characters are:%d",sp);
}
