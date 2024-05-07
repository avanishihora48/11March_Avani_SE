#include<stdio.h>
void string(char s1[100],char s2[100])
{
	int i=0,j=0;
	while(s1[i]!='\0' && s2[i]!='\0'){
		if(s1[i] != s2[i]){
			j=1;
			break;
		}
		i++;
	}
	
	if(j==0){
		printf("\nStrings are equal.");
	}
	else{
		printf("\nStrings are not equal.");
	}
}
main()
{
	char s1[100],s2[100];
	
	
	printf("Enter first string:");
	scanf("%s",&s1);
	printf("Enter second string:");
	scanf("%s",&s2);
	
	string(s1,s2);
}
