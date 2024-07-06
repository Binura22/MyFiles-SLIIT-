#include <stdio.h>
#include <assert.h>

//create function 1
float calcAnnualInterest(float interestRate, float amount)
{
	float interest;
	
	if( amount > 1000000)
	{
		interest =  (amount * 0.005)+(amount * (interestRate/100.0));
	}
	else 
	{
		interest = amount * (interestRate/100.0);
	}
	return interest;
}
//create function 2
float findTotalAmount(float interestRate, float amount)
{
	float Total_amount;
	float interest;
	
	interest = calcAnnualInterest(interestRate, amount);
	
	Total_amount = amount + interest;
	
	return Total_amount;
}
//create assert function
void testTotalAmount()
{
	assert(findTotalAmount(10,1000));
	assert(findTotalAmount(20,2000));
}
//main function
int main( void )
{
	int i;
	float Amount;
	float percentage;
	float interest, Total;
	
	testTotalAmount();
	
	printf("Enter Initial Amount to be invested       :");
	scanf("%f", &Amount);
	
	printf("Enter Annual initial Rate (in percentage) :");
	scanf("%f", &percentage);
	
	//interest = calcAnnualInterest(percentage, Amount);
	
	Total = findTotalAmount(percentage,Amount);
	
	for ( i = 0; i < 5 ; i++ )
	{
		printf("Amount after year %d :%.2f \n", i+1, Total);
		
		interest = calcAnnualInterest(percentage, Total);
		
		Total = findTotalAmount(interest,Total);
	}	
		
	return 0;
}
