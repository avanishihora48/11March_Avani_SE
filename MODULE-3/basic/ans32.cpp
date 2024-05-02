#include<stdio.h>
main()
{
   int a,b;
   printf("Enter the value of A and B:",a,b);
   scanf("%d%d",&a,&b);
   a+=b;
   printf("\nAddition of A+B is:%d",a);
   printf("\nSize of value is:%d",sizeof(a));

}

