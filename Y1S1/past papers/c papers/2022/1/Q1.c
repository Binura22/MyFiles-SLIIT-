#include <stdio.h>

int main( void ) //start of main function
{
	// for loop variable declaretion
	int i;
	
	//variable declaretion
	
	int num;
	int digit1, digit2, digit3, digit4;
	int n1, n2,n3;

//start for loop for iteration

for( i = 0; i < 1; ++i )
{	
	//grt 4 digit number from user
	printf("Enter a four digit number :");
	scanf("%d", &num);
	
	if( num > 999 && num < 10000 )	//cheack number 
	{
		//separate for digits
		
		digit1 = num/1000;
		n1 = num%1000;
		
		digit2 = n1/100;
		n2 = n1%100;
		
		digit3 = n2/10;
		n3 =n2%10;
		
		digit4 = n3/1;
	
		//check palindrome or not
		if( digit1 == digit4 && digit2 == digit3)
		{
			printf("It is a palindrome.\n");
		}
		
		else
		{
			printf("It is not a palindrome.\n");
		}
			
	}
	// if number more than or less than 4 digits display invalid number
	else
	{
		printf("Invalid number.\n");
		--i;	//decrement value to get new number
	}
	

}
	return 0;
}//end of main function
