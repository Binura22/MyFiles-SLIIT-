#include <stdio.h>

int main( void )
{
	int i,j;
	char colour[4][4];
	
	for( i = 0 ; i < 4; ++i )
	{
		for( j = 0 ; j < 4; ++j )
		{
			printf( "Enter colour(R,G,B):" );
			scanf( " %c", &colour[i][j] );
		}
		printf("\n");
	}
	
	for( i = 0 ; i < 4; ++i )
	{
		for( j = 0 ; j < 4; ++j )
		{
			printf( " %c", colour[i][j] );
		}
		printf("\n");
	}
	
	printf( "\n" );
	printf( "Red LED bulb poditions:\n" );
	
	for(i = 0 ; i < 4; ++i)
	{
		for(j = 0 ; j < 4; ++j)
		{
			if( colour[i][j] == 'R' )
			{
			printf( " [%d,%d]", i,j );
			}
			
		}
	}
	
	return 0;
}
