#include <stdio.h>
	//start user define function calculateIncrement
	float calculateIncrement( int grade, float basicSalary )
	{	float Increment;
	
		switch( grade )
		{
			case 1: Increment = 0.10 * basicSalary;
				break;
			case 2: Increment = 0.15 * basicSalary;
				break;
			case 3: Increment = 0.20 * basicSalary;
				break;
			default :printf( "Invalid Grade \n" );
		}
		return Increment;
	}//end of define function calculateIncrement
	
	//start user define function calcTotSalary
	float calcTotSalary( float salary, float increment )
	{	float totalSalary;
	
		totalSalary = salary + increment;
		return totalSalary;
	}//end of define function calcTotSalary
	
	int main( void ) //start main function
	{	float Salary,Grade,increment,Total;
		
		//get salary and grade from user
		printf( "Enter Salary :" );
		scanf("%f",&Salary);
		
		printf( "Enter grade :" );
		scanf("%f",&Grade);
		
		//Call user define function calculateIncrement
		increment = calculateIncrement( Grade,Salary );
		printf( "Increment :%.2f\n",increment ); //display increment
		
		//Call user define function calcTotSalary
		Total = calcTotSalary( Salary,increment );
		printf( "Total Salary :%.2f",Total ); //display Total salary
		
		return 0;
	}//end of the main function
