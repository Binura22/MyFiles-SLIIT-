#include <stdio.h>

int main ( void )
{
	int image[4][4];
	int i, j, value;
	
	for( i = 0; i < 4; ++i )
	{
		printf("Values for row %d \n", i+1);
		
		for( j = 0; j < 4; ++j )
		{
			printf("   Enter element %d :",j+1);
			scanf("%d", &image[i][j]);
		}
		printf("\n");
	}
	
	for( i = 0; i < 4; ++i )
	{
		for( j = 0; j < 4; ++j )
		{
			printf(" %d  ", image[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for( i = 0; i < 4; ++i )
	{
		for( j = 0; j < 4; ++j )
		{
			value = image[i][j];
			
			if( value > 55 )
			{
				printf("1 ");
			
			}
			else if ( value < 55)
			{
				printf("0 ");
				
			}
			
		}
		printf("\n");
	}
	
	return 0;
}
