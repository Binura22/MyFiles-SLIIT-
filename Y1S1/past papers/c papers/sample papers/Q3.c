#include <stdio.h>

//function called calclnterest ( ) to calculate and retunthe armual interest

float calcInterest( int FDType, float depositAmount )
{
	float interest;
	//choose right FD type and interest rate
	switch( FDType )
	{
		case 1:interest = depositAmount * 0.16;
			break;
		case 2:interest = depositAmount * 0.15;
			break;
		case 3:interest = depositAmount * 0.155 ;
			break;	
		case 4:interest = depositAmount * 0.175 ;
			break;	
		default:printf( "Invalid Deposit Type ! \n" ); 
	}
	return interest;
}

//function called calcTax ( ) to return the withholding tax amount
float calcTax( float annualInterest )
{
	float taxAmount;
	//calculate tax amount
	taxAmount = (  annualInterest* 0.05 );
	
	return taxAmount;
}

//function called di s layDetai i s ( ) to display details

void displayDetails( float interest, float taxAmount )
{
	float payable;
	
	payable = interest - taxAmount;
	printf( "Annual Interest \t Tax amount \t Amount Payable \n" );
	printf( "--------------- \t ---------- \t -------------- \n" );
	printf( "%10.2f % 23.2f % 18.2f \n", interest, taxAmount, payable );
}

int main( void ) //start of main function
{
	//FD tpye as a integer and other variables as float
	int depositType;
	float Amount, AnualInterest, Tax;
	
	//start do-while loop 
do{
	//get FD type from user
	printf("Fixed Deposit Type :");
	scanf("%d", &depositType);
	
	//if deposit type =-1,program will execute
	if(depositType == -1)
	{
		break;
	}
	//get deposit amount from user
	printf("Deposit Amount :");
	scanf("%f", &Amount);
	printf("\n");

	//Call functions 
	AnualInterest = calcInterest( depositType,Amount );
	
	Tax = calcTax( AnualInterest );
	
	displayDetails( AnualInterest,Tax);
	printf("\n");
  
  }while ( depositType != -1 ); //end of do-while loop
  
	return 0;
}//end of main function
