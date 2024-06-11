#include<stdio.h>
main()
{
	int total,choice,q,amount,price,a;
	char ch;
	do{
    	printf("------- Menu -------");
	    printf("\n1.Pizza..............price=180rs/pcs");
	    printf("\n2.Burger.............price=100rs/pcs");
	    printf("\n3.Dhosa .............price=120rs/pcs");
	    printf("\n4.Idali..............price=50rs/pcs");
	    printf("\nPlease enter your choice:" );
	    scanf("%d",&choice);
	    switch(choice){
		case 1:
		printf("You have selected Pizza.");
		price = 180;
		break;
		
		case 2:
		printf("You have selected Burger.");
		price = 100;
		break;
		
		case 3:
		printf("You have selected Dhosa.");
		price = 120;
		break;
		
		case 4:
		printf("You have selected Idali.");
		price = 50;
		break;
		
		default:
			printf("Invalid choice..");
	}
	printf("\nPlease enter your quantity:");
		scanf("%d",&q);
		amount=q*price;
		printf("\nAmount:%d",amount);
		printf("\nTotal Amount is = %d",amount);
		printf("\nDo you want to place more orders?:");
		scanf(" %c",&ch);
	    
	}
	while(ch=='y' || ch=='Y');
	printf("Your total amount is:%d",amount);
	printf("\n--- Thank You ---");
	
}
