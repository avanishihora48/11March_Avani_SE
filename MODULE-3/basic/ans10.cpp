#include<stdio.h>
main()
{
	int w,l,h,area;
	printf("Enter the value of w,l and h:",w,l,h);
	scanf("%d%d%d",&w,&l,&h);
	area =2*(w*l+h*l+h*w);
	printf("The Area of rectangle prism is:%d",area);
	
}
