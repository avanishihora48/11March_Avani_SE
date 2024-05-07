#include<stdio.h>
#include<string.h>
main()
{
   char s1[50],s2[50],com[100];
   
   printf("Enter the first string:");
   scanf("%s",s1);
   
   printf("Enter the second string:");
   scanf("%s",s2);
   
   strcpy(com,s1);
   strcat(com," ");
   strcat(com,s2);
   
   printf("\nCombined string:%s",com);
	
}
