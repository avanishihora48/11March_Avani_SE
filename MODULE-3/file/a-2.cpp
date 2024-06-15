#include<stdio.h>
main()
{
	FILE*fl;
	fl = fopen("a-2.txt","a");
	int id,n,i;
	char nm[20],city[20];
	
	printf("Enter total number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n\nEnter your ID: ");
	    scanf("%d",&id);
	    printf("Enter your name: ");
	    scanf("%s",&nm);
	    printf("Enter your city:");
	    scanf("%s",&city);
	    
	    printf("\n\nID:%d",id);
		printf("\nName:%s",nm);
		printf("\nCity:%s",city);
		
		fprintf(fl,"\n\nID:%d",id);
		fprintf(fl,"\nName:%s",nm);
		fprintf(fl,"\nCity:%s",city);
	}
	
		fclose(fl);
}

