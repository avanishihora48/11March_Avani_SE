#include <stdio.h>
#include<string.h>
int main()
{
	char na[100],sna[10][20];
	int i,j=0,k=0,m=0,n=0,max,min;
	printf("Enter line of string:");
	gets(na);
	for(i=0;na[i]!=NULL;i++)
	{
		if(na[i]==' ')
		{
			sna[k][j]='\0';
			k++;
			j=0;
		}
		else{
			sna[k][j]=na[i];
			j++;
		}
	}
	sna[k][j]='\0';
	max=strlen(sna[0]);
	min=strlen(sna[0]);
	for(i=0;i<=k;i++)
	{
		if(max<strlen(sna[i]))
		{
			m=i;
		}
		if(min>strlen(sna[i]))
		{
			n=i;
		}
	}
	printf("\nLargest word is:%s",sna[m]);
	printf("\nSmallest word is:%s",sna[n]);
	
}




