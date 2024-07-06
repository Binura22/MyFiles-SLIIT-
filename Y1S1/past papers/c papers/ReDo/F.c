#include <stdio.h>
#include <assert.h>

double calculateAmount( int type, double initial)
{
	float balance, interest;
	
	switch( type )
	{
		case 1:interest = initial * ( 4/100.0 ) ;
			break;
		case 2:interest = initial * ( 7/100.0 ) ;
			break;
		case 3:interest = initial * ( 10/100.0 ) ;
			break;
		default:printf("Invalid Type! \n");
	}
	balance = initial + interest;
	
	return balance;
}

void printDetails( int type, double initial, double balance )
{
	printf("Acc Type \t Initial \t Balance \n");
	printf("---------\t --------\t -------- \n");
	printf(" %5d %17.2lf %16.2lf \n",type, initial, balance); 
	printf("\n");
	
}
void checkEligibility( double Balance )
{
		if(Balance >= 5000)
		{
			printf(" You are eligible to draw -1 \n" );
		}
		else
		{
			printf(" You are not eligible to draw -2 \n" );
		}
	
}

int main( void )
{
	double initials, AccBalance;
	int acctype,count;
	
  while(count<=5)

	{

		printf("Enter account type :");
		scanf("%d", &acctype);
		
		printf("Enter your initials:");
		scanf("%lf", &initials);
		
		printf("\n");
		
		AccBalance = calculateAmount( acctype, initials );
		
		checkEligibility( AccBalance );
		
		printDetails( acctype, initials, AccBalance );
		
		++count;
	
	}
	
	return 0;
	
}
