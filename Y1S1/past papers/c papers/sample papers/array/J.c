#include <stdio.h>

int main( void )
{
	int i;
	double salaries[5];
	double newsalary[5];
	
	for( i = 1 ; i <= 5 ; ++i)
	{		
		printf("Input the salary of employee %d:",i);
		scanf(" %lf", &salaries[i]);
			
		if(salaries[i] < 0)
		{
			printf("Please re-enter the amount \n");
			--i;
		}
			
	}
	
	for( i = 1 ; i <= 5 ; ++i)
	{
		if(salaries[i] < 1000)
		{
			newsalary[i] = salaries[i] *1.10;
		}
		else
		{
			newsalary[i] = salaries[i] ;
		}
	}
	
	printf("\n");
	printf("Employee number \t Salary \n");
	for( i = 1 ; i <= 5 ; ++i)
	{
		printf(" %d \t %10lf \n",i,newsalary[i]);
	}
	
	return 0;
}
