#include <stdio.h>

int main( void )
{
	int x,y,z;
	
	for( x=2; x>=1; --x )
	{
		for( y=2; y>=1; --y)
		{
			
			for ( z=2; z>=1; --z )
			{
				printf("[%d %d %d]",x,y,z);
				printf("\n");	
			}

		}
		
	}
	return 0;
}
