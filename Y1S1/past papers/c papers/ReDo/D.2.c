#include <stdio.h>

//implement function calculateTotalCost
float calculateTotalCost ( int itemNo, int quantity )
{
	float cost;
	//choose corect item number and calculate cost
	switch( itemNo )
	{
		case 1: cost = 100 * quantity;
			break;
		case 2: cost = 200 * quantity;
			break;
		case 3: cost = 300 * quantity;
			break;	
		default:printf( "Invalid Item Number!" );
	}
	return cost;
}
//implement function printDetails
void printDetails ( int itemNo, int quantity, float totalCost )
{
	printf( "Item No \t Quntity \t Toatal \n" );
	printf( "--------\t ------- \t -------\n" );
	printf("%3.d %18.d %18.2f",itemNo, quantity, totalCost);
	
}

int main( void )//start main function
{
	int ItemNo, Quntity;
	float Total;
	
	//get inputs from user
	printf("Enter Item No :");
	scanf("%d", &ItemNo);
	printf("Quntity Purchased :");
	scanf("%d", &Quntity);
	
	//call functions
	Total = calculateTotalCost ( ItemNo, Quntity );
	
	printDetails ( ItemNo, Quntity, Total );
	
	return 0;
	//end of the main function
}
