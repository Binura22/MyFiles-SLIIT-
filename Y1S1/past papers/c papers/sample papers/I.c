# include <stdio.h>
	int main(void){
		//variable declaration
		int booktype,days;
		float rent,fine,total;
		//get input from user
		printf("Book Type:");
		scanf("%d", & booktype);
		
		printf("Rented days:");
		scanf("%d", & days);
		//select booktype,rent and calculate fine 
		switch(booktype){
			
			case 1:rent = 10;
				
				if(days <= 14)
				{
					fine = 0;
				}
				else
				{
					fine = 0.1 * rent;
				}
			break;
			
			case 2:rent = 8;
				
				if(days <= 14)
				{
					fine = 0;
				}
				else
				{
					fine = 0.1 * rent;
				}
			break;
		}
		//print rent per day
		printf("Rental per day:Rs.%.2f\n",rent);
		//calculate total amount
		total = (rent + fine) * days;
		//print rental amount
		printf("Rental Amount:Rs.%.2f\n",total);
		
		return 0;
	}
