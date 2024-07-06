#include <stdio.h>
#include <assert.h>

float calDiscount (int time, float totAmount)
{
	float discount;
	
	if( time >= 16 && time <= 19)
	{
		if( totAmount >= 5000 )
		{
			discount = totAmount * 0.10;
		}
		else if (  totAmount < 5000 && totAmount >= 2500)
		{
			discount = totAmount * 0.07;
		}
		else
		{
			discount = totAmount * 0;
		}
		
	}
	else if( time >= 20 && time <= 22 )
	{
		if( totAmount >= 5000 )
		{
			discount = totAmount * 0.12;
		}
		else if (  totAmount < 5000 && totAmount >= 2500)
		{
			discount = totAmount * 0.09;
		}
		else
		{
			discount = totAmount * 0;
		}
	}
	else
	{
		discount = totAmount * 0;
	}
	
	return discount;
}

void testcalDiscount()
{
	assert( calDiscount(16,5000) == 500);
	assert( calDiscount(20,5000) == 600);
}
void displayGift(float finalTot)
{
	if(finalTot >= 7000)
	{
		printf("Packet of Milk \n");
	}
	else if( finalTot >= 5000 && finalTot < 6999)
	{
		printf("1 Kg of sugar \n");
	}
	else if( finalTot >= 3000 && finalTot < 4999)
	{
		printf("Pack of 6 Eggs \n");
	}
	else
	{
		printf("No gift !\n");
	}
}

int main(void)
{

	int time;
	float amount, Discount, finalamount;
	
	printf("Enter your time:");
	scanf("%d", &time );
	
	printf("Enter your total amount:");
	scanf("%f", &amount);
	
	Discount = calDiscount (time, amount);
	
	testcalDiscount();
	
	finalamount = amount - Discount;
		
	printf("your final amount is:%.2f \n",finalamount);
	
	displayGift(finalamount);
	
	
	
	return 0;
}
