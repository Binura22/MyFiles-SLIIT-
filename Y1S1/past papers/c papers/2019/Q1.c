# include <stdio.h>

int main ( void )
{
	int type;
	char size;
	int noofpizza;
	float Bill_amount = 0;
	float amount;
	float Net_amount,Discount;
	char card,customer,online;
	
do{
	printf("Input Pizza type :");
	scanf("%d", &type);
		
	switch(type)
	{
		case 1: printf("Input the pizza size :");
				scanf(" %c", &size);
				
				printf("Input the number of pizzas :");
				scanf("%d", &noofpizza);
				
				if(size == 'L')
				{
					amount = 1720 * noofpizza;
				}
				else if(size == 'M')
				{
					amount = 975 * noofpizza;
				}
				else
				{
					printf("Invalid pizza size ! \n");
				}
				Bill_amount = Bill_amount + amount;
				
			break;
			
		case 2: printf("Input the pizza size :");
				scanf(" %c", &size);
				
				printf("Input the number of pizzas :");
				scanf("%d", &noofpizza);
				
				if(size == 'L')
				{
					amount = 1820 * noofpizza;
				}
				else if(size == 'M')
				{
					amount = 1000 * noofpizza;
				}
				else
				{
					printf("Invalid pizza size ! \n");
				}
				Bill_amount = Bill_amount + amount;
				
			break;				
	}
	printf("\n");
	
}while( type != -1 );

	printf("Are you paying by credit card (Y/N) ? ");
	scanf(" %c", &card);
	
	printf("Are you a loyalty customer (Y/N) ? ");
	scanf(" %c", &customer);
	
	printf("Is this an online order (Y/N) ? ");
	scanf(" %c", &online);

	switch(card)
	{
		case 'Y': if(customer == 'Y')
				{
					if(online == 'Y')
					{
						Discount = Bill_amount * 0.2 ;
					}
					else if (online == 'N')
					{
						Discount = Bill_amount * 0.2 ;
					}
				}
				else if(customer == 'N')
				{					
					if(online == 'Y')
					{
						Discount = Bill_amount * 0.2 ;
					}
					else if (online == 'N')
					{
						Discount = Bill_amount * 0.2 ;
					}
				}
		case 'N': if(customer == 'Y')
				{
					if(online == 'Y')
					{
						Discount = Bill_amount * 0.15 ;
					}
					else if (online == 'N')
					{
						Discount = Bill_amount * 0.15 ;
					}
				}
				else if(customer == 'N')
				{					
					if(online == 'Y')
					{
						Discount = Bill_amount * 0.05 ;
					}
					else if (online == 'N')
					{
						Discount = Bill_amount * 0 ;
					}
				}	
	}
	
	printf("\n");
		
	printf("Total bill amount :%.2f \n",Bill_amount);
	
	printf("Discount :%.2f \n",Discount);
	
	Net_amount = Bill_amount - Discount;
	
	printf("Net amount:%.2f \n",Net_amount);
	
	return 0;
}
