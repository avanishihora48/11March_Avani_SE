#include<stdio.h>
void cal(){
	char nm[100];
	int l=0;
	
	printf("Enter name:");
	scanf("%s",&nm);
	
	while (nm[l] != '\0'){
		l++;
	}
	printf("Length of string is:%d",l);
}
main()
{
	cal();
}

