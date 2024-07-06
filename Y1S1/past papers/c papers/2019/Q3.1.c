#include <stdio.h>
#include <assert.h>

float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate,float amount);
void testTotalAmount();

int main ( void )
{
	int i;
	float amount,total;
	float rate; 
	
	testTotalAmount();
	
	printf("Enter Initial Amount to be invested       :");
	scanf("%f", &amount);
	
	printf("Enter Annual interest Rate(in percentage) :");
	scanf("%f", &rate);
	
	calcAnnualInterest(rate,amount);
	
	total = findTotalAmount(rate,amount);
	
	for( i = 0; i < 5; ++i )
	{	
		printf("Ammount after year %d:%.2f\n",i+1, total);
	
		total = findTotalAmount(rate,total);
	}
	
	return 0;
}

float calcAnnualInterest(float interestRate, float amount)
{
	if(amount > 1000000)
	{
		return (amount*0.005) + (amount*interestRate/100.0);
	}
	else
	{
		return amount*interestRate/100.0;
	}
}

float findTotalAmount(float interestRate,float amount)
{
	float Interest;
	float Total;
	
	Interest = calcAnnualInterest(interestRate, amount);
	
	Total = Interest + amount;
	
	return Total;
}

void testTotalAmount()
{
	assert (findTotalAmount(10,1000) == 1100);
	assert (findTotalAmount(20,2000) == 2400);
}
