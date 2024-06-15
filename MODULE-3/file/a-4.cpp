#include<stdio.h>
main()
{
	FILE*fl;
	fl = fopen("a-4.txt","a");
	char fnm[20],lnm[20];
	
	printf("Enter first name: ");
	scanf("%s",fnm);
	
	printf("Enter last name:");
	scanf("%s",lnm);
	
	printf("\nFirst name: %s",fnm);
	printf("\nlast name: %s",lnm);
	
	fprintf(fl,"First name: %s",fnm);
	fprintf(fl,"\nlast name: %s",lnm);
	
	fclose(fl);
}
