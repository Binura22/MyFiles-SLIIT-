#include <stdio.h>
//start user define function calpayment
float calpayment(int roomType,char accBasis)
{
	float amount;//new variable
	//choose right room type, Accommodation Basis and find amount
	switch(roomType)
	{
		case 1:if(accBasis == 'F')
					{
					amount =25555.00 ;	
					}
				if(accBasis == 'H')
					{
					amount =17250.00 ;	
					}
			break;
		case 2:if(accBasis == 'F')
					{
					amount =17500.00 ;	
					}
				if(accBasis == 'H')
					{
					amount =12250.00 ;	
					}
			break;	
		case 3:if(accBasis == 'F')
					{
					amount =9000.00	;
					}
				if(accBasis == 'H')
					{
					amount =7250.00	;
					}
			break;
		default:printf("“Invalid Type of room \n");	
				
	}
	//return amount to main function
	return amount;
}
//start user define function to calculate discount
float discountcal(char cardType,float Payment)
{
	float discount;
	//choose righr grade and find discount
	switch(cardType)
	{
	case 'G':discount = 0.125 * Payment;
		break;
	case 'S':discount = 0.115 * Payment;
		break;	
	case 'B':discount = 0.095 * Payment;
		break;
	default:printf("Invalid type \n");
	}
	return discount;	
}

int main()//start of main function
{
	int roomType,days; 
	char cardType,accBasis;
	float payment,Discount,Total;
	
	//get room type from user
	printf("Enter type of room :");
	scanf("%d",&roomType);
	
	//start of while loop 
	while(roomType != -1)
	{
		//get Accommodation Basis from user
		printf("Enter Accommodation Basis (F/H) :");
		scanf(" %c",&accBasis);
		//get days from user
		printf("Enter No of days :");
		scanf(" %d",&days);
		//get cardtype from user
		printf("Enter Reward Card Type ( G, S, B ) :");
		scanf(" %c",&cardType);
		
		//call funcrions
		payment = calpayment(roomType,accBasis);
		Discount =discountcal(cardType,payment);
		
		//calculation to find total
		Total = (payment - Discount)*days;
		//display total amount
		printf("Amount(Rs.) :%.2f\n",Total);
		
		printf("\n");
		printf("Enter type of room :");
		scanf("%d",&roomType);
	}
	
	
	
	
	return 0;
}
