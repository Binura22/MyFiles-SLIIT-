#include <stdio.h>

int main( void )
{
	int mark, maximum = 0;
	
	printf("Enter mark:");
	scanf("%d", &mark);
	
	while( mark != -99 )
	{
		if(mark < 100 && mark > 0 ) 
		{
		
			if(mark > maximum)
			{
				maximum = mark;
			
			}
			
			printf("Enter mark:");
			scanf("%d", &mark);
			
		}
		else
		{
			printf( "Invalid \n" );
			printf( "Enter mark:" );
			scanf( "%d", &mark );
			
		}
		
	}
	printf( "\n" );
	printf( "Max is:%d\n",maximum );
	
	return 0;	
}
