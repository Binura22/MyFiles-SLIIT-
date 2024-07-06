#include <stdio.h>
#include <assert.h>

float calcInterest ( int FDType, float depositAmount )
{
	float interest;
	
	switch(FDType)
	{
		case 1: interest = 0.16 * depositAmount;
			break;
			
		case 2: interest = 0.15 * depositAmount;
			break;
			
		case 3: interest = 0.155 * depositAmount;
			break;
			
		case 4: interest = 0.175 * depositAmount;
			break;	
	}
	
	return interest;
}

float calcTax( float annualInterest )
{
	float Tax;
	
	Tax = annualInterest * 0.05;
	
	return Tax;
}

void displayDetails ( float interest, float tax, float payable )
{
	printf("\n");
	printf("Annual Interest \t Tax amount \t Amount payable \n");
	printf("--------------- \t ---------- \t ---------------\n");
	printf("%10.2f \t %15.2f \t %10.2f \n", interest, tax, payable);
}

void testcalcInterest()
{
	assert ( calcInterest ( 1 , 1000 ) == 160);
	assert ( calcInterest ( 2 , 1000 ) == 150);
}

int main ( void )
{
	int type;
	float amount;
	float interest;
	float tax;
	float payable;
	
  while(type != -1 )	
	{	
		testcalcInterest();

		printf("Fixed Deposit type :");
		scanf("%d", &type);
		
		if( type == -1)	
		{
			break;
		}
		
		printf("Deposit amount:");
		scanf("%f", &amount);
		
		interest = calcInterest(type,amount);
		
		tax = calcTax(interest);
		
		payable = interest - tax;
		
		displayDetails(interest,tax,payable);
		
		printf("\n");
		
		}
	return 0;
}
