#include<stdio.h>
main()
{
	float a,b,c,total;
	printf("Enter the value of Angle-1,Angle-2 and Angle-3:");
	scanf("%f%f%f",&a,&b,&c);
	total=a+b+c;
	if(total==180 && a>0 && b>0 && c>0){
		printf("Angle-1,Angle-2 and Angle-3 forms perfect traingle");
	}else{
		printf("Angle-1,Angle-2 and Angle-3 does not forms perfect traingle");
	}
}
