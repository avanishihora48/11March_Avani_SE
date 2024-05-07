#include<stdio.h>
#include<string.h>
void substring(char str[100],char sub[100],int start, int l){
	int c=0;
	while(c<l){
		sub[c]=str[start+c];
		c++;
	}
	sub[c]='\0';
}
main()
{
	char str[100],sub[100];
	int start, l;
	printf("Enter a string:");
	gets(str);
	
	printf("Enter the starting index:");
	scanf("%d",&start);
	
	printf("Enter the length of the substring:");
	scanf("%d",&l);
	
	substring(str,sub,start,l);
	printf("Substring:%s",sub);
}
