#include<stdio.h>
int vowel(char ch)
{
return ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u';
}
int main()
{
	char s[100];
	int c=0,v=0,i;
	
	printf("Enter a string:");
	scanf("%s",&s);
	
	for(i=0;s[i]!='\0';i++){
		if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
			if(vowel(s[i])){
				v++;
			}
			else{
				c++;
			}  
		}
		
	}
	printf("\nTotal number of vowels are:%d",v);
	printf("\nTotal number of consonants are:%d",c);

}
