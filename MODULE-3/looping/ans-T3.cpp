#include<stdio.h>
main()
{
	int i,n,even,odd,sumeven,sumodd;
	printf("Enter number:\n");
	for(i=0;i<10;i++){
		printf("Number %d:",i+1);
		scanf("%d",&n);
		
		
		if(n%2==0)
		{
			even++;
			sumeven += n;
		}
		else
		{
			odd++;
			sumodd += n;
		}
		
		}
		printf("\nEven numbers are:%d",even);      //a.
		printf("\nOdd numbers are:%d",odd);       //b.
		printf("\nSum of even numbers are:%d",sumeven);   //c.
		printf("\nSum of odd numbers are:%d",sumodd);    //d.
		
}


