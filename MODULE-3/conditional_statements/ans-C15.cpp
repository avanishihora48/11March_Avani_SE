#include<stdio.h>
main()
{
	int m,p,c,total,sub;
	printf("Enter the marks of maths:");
	scanf("%d",&m);
	printf("\nEnter the marks of physics:");
	scanf("%d",&p);
	printf("\nEnter the marks of chemistry:");
	scanf("%d",&c);
	
	total=m+p+c;
	
	printf("\ntotal marks of all three subject is:%d",total);
	printf("\ntotal marks of maths and pysics is:%d",m+p);
	
	if(m>=65 && p>=55 && c>=50 && total>=190){
		printf("\nYou are eligible");
	}else if(m+p>=140){
		printf("\nYou are eligible");
	}else{
		printf("\nYou are not eligible");
	}
}
