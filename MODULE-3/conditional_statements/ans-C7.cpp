#include<stdio.h>
main()
{
	int s1,s2,s3,s4,total,pr;
	printf("Enter subject 1 marks:",s1);
	scanf("%d",&s1);
	printf("Enter subject 2 marks:",s1);
	scanf("%d",&s2);
	printf("Enter subject 3 marks:",s1);
	scanf("%d",&s3);
	printf("Enter subject 4 marks:",s1);
	scanf("%d",&s4);
	 
	if(s1>=40,s2>=40,s3>=40,s4>=40){
	total=s1+s2+s3+s4;
	printf("\nYour total is:%d",total);
	pr=total/4;
	printf("\nyour percentage is:%d",pr);
	
	if(pr>=80){
		printf("\nYou got A+ ");
	}
	else if(pr>=70){
		printf("\nYou got A");
	}
	else if(pr>=60){
		printf("\nYou got B+");
	}
	else if(pr>=40){
		printf("\nYou got B");
	}
	else {
		printf("\nyou passed");
	}
    }else{
		printf("You failed");
	}
	
}
 
