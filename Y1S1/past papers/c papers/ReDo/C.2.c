#include <stdio.h>

// create calculateWeeklySalary to find correct grade and salary
float calculateWeeklySalary( int grade, float hrsWorked )
{
	float salary;
		//find correct grade	
		switch( grade )
		{
			case 1: salary = hrsWorked * 100.00;
				break;
			case 2: salary = hrsWorked * 200.00;
				break;
			case 3: salary = hrsWorked * 300.00;
				break;
			default:printf( "Invalid Grade ! \n" );
		}
	return salary;	//return salary
}

// create printDetails function to display details
void printDetails( int grade, float hrsWorked, float salary )
{
	printf( " Grade \t Hours \t  Salary\n " );
	printf( "------\t ------\t  --------\n" );
	printf( "%4d %10.2f %10.2f \n", grade, hrsWorked, salary );
}

int main( void )	//start main function
{
	int grade;
	float hours,Salary;
	
	//get inputs from user
	printf( "Enter your grade:" );
	scanf( "%d", &grade);
	
	printf("Enter worked hours:" );
	scanf( "%f", &hours );
	
		//call funcrions in main 
		Salary = calculateWeeklySalary( grade, hours );
		
		printDetails( grade, hours,Salary );
	
	return 0;	//end of the main function
}
