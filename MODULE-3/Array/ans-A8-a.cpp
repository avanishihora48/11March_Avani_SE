#include<stdio.h>

main()
{
	char empnm[5][50];
	int empno[20],empage[20],n,i;
	printf("Enter number of employees:");
	scanf("%d",&n);
	printf("Enter details of employee:-",i+1);
	for(i=0;i<n;i++){
	printf("\nName:");
	scanf("%s",&empnm[i]);
	printf("Age:");
	scanf("%d",&empage[i]);
	printf("Number:");
	scanf("%d",&empno[i]);
}
printf("\n");

printf("\nEmployee details:-");
    for(i=0;i<n;i++){
    printf("\nEmployee %d:\n",i+1);
    printf("Name:%s\n",empnm[i]);
	printf("Age:%d\n",empage[i]);
	printf("Number:%d\n",empnm[i]);
 }
 printf("\n");
}
