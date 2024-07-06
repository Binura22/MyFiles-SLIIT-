#include <stdio.h>

//create calcInrement function to find inrement
float calcIncrement( float salary, int noofYearsWorked)
{
	float increment;
	//use if-else statments find correct year 
		if( noofYearsWorked > 2)
		{
			increment = salary * 0.1 ;
		}
		else
		{
			increment = 0 ;
		}
		
	return increment;	//return increment
}

//create calcTotSalary to fint total salary
float calcTotSalary( float salary, float Incement)
{
	float totalSalary;
	//calculate total salary
	totalSalary = salary + Incement;
	
	return totalSalary;	//return totalsalary 
}
int main( void )	//start main function
{
	int noofYears;
	float Salary, Increment, Total;
	
	//get input by user
	printf("Enter Salary :");
	scanf("%f", &Salary);
	
	printf("Enter no of years worked :");
	scanf("%d", &noofYears);
	
	//call functions in main 
	Increment = calcIncrement( Salary, noofYears );
	
	Total = calcTotSalary( Salary, Increment);
	
	//display increment and Total salary
	
	printf("Increment : %.2f \n", Increment);
	printf("Total Salary : %.2f \n", Total);
	
	return 0;	//end of main function
}
