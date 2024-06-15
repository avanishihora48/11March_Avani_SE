#include<stdio.h>
main()
{
	int n,i,s1,s2,s3,total;
	char nm[20];
	float per;
	FILE*fl;
	fl = fopen("a-6.txt","a");
	
	printf("Enter number of students:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n\nEnter Name of student: ");
		scanf("%s",&nm);
		
		printf("Enter subject-1 mark: ");
		scanf("%d",&s1);
		
		printf("Enter subject-2 mark: ");
		scanf("%d",&s2);
		
		printf("Enter subject-3 mark: ");
		scanf("%d",&s3);
		
		total = s1 + s2 + s3;
		per = total/3;
		 
		
		printf("\n\nName:%s ",nm);
		printf("\nMark - 1: %d",s1);
		printf("\nMark - 2: %d",s2);
		printf("\nMark - 3: %d",s3);
		printf("\n------------------------");
		printf("\nTotal marks is: %d",total);
		printf("\nPercentage is: %.2f",per);
		if(per>=35)
		{
			printf("\npass..");
		}
		else
		{
			printf("\nfail..");
		}
		
		

		fprintf(fl,"\n\nName:%s ",nm);
		fprintf(fl,"\nMark - 1: %d",s1);
		fprintf(fl,"\nMark - 2: %d",s2);
		fprintf(fl,"\nMark - 3: %d",s3);
		
		fprintf(fl,"\n------------------------");
		fprintf(fl,"\nTotal marks:%d ",total);
		fprintf(fl,"\nPerctage id:%.2f ",per);
		if(per>=35)
		{
			fprintf(fl,"\npass..");
		}
		else
		{
			fprintf(fl,"\nfail..");
		}
	}
	fclose(fl);
}
