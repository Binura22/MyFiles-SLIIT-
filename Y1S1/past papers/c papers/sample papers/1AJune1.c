# include <stdio.h>

int main ( void )
{
	char type;
	float fee1 = 0, fee2 = 0, fee3 = 0;
	float Count1, Count2, Count3;
	int count;
			
for( count=0; count <=99; ++count)
	{	
		printf("Enter Course Type (H/M/F):");
		scanf(" %c",&type);	
	
		if( type == 'H' || type == 'h')
		{
			fee1 = fee1 + 1500.00 ;
		}
		else if( type == 'M' || type == 'm')
		{
			fee2 = fee2 + 2000.00 ;
		}
		else if( type == 'F' || type == 'f')
		{
			fee3 = fee3 + 2500.00 ;
		}
		else
		{
			printf("Invalid Course Type ! \n");
			--count;
		}	
		
	}
	
		Count1 = fee1/1500.00;
		Count2 = fee1/2000.00;
		Count3 = fee1/2500.00;
			
		printf("\n");
		printf("Total registration fee from course 1: %.2f\n",fee1);
		printf("Total students for course 1:%.f \n",Count1);
			
		printf("Total registration fee from course 2: %.2f \n",fee2);
		printf("Total students for course 2:%.f \n",Count2);
		
		printf("Total registration fee from course 3: %.2f \n",fee3);
		printf("Total students for course 3:%.f \n",Count3);
	
	return 0;	
} 
