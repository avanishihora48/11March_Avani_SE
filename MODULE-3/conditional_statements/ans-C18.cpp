#include<stdio.h>
main()
{
	float cost,sell,profit,loss;
	printf("Enter the value of cost price:");
	scanf("%f",&cost);
	printf("Enter the value of selling price:");
	scanf("%f",&sell);
	
	profit=cost-sell;
	loss=sell-cost;
	if(profit>0){
		printf("profit");
	}
	else if(loss>0){
		printf("Loss");
	}
	else{
		printf("Neither profit nor loss");
	}
}
