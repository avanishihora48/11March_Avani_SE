#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],d[3][3],e[3][3],i,j;
	printf("Enter 1st matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d ",&a[i][j]);
		}
		printf("\n");
	}
	printf("Enter 2nd matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d ",&b[i][j]);
		}
		printf("\n");
	}
	printf("The first matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("The second matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
printf("\nsummation of two matrices is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
			
		}
		
		printf("\n");
    }
    printf("\nsubstraction of two matrices is:\n");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			d[i][j]=a[i][j]-b[i][j];
			printf("%d ",d[i][j]);
		}
		
		printf("\n");
    }
    printf("\nMultiplication of two matrices is:\n");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			d[i][j]=a[i][j]*b[i][j];
			printf("%d ",e[i][j]);
		}
		
		printf("\n");
    }
}
