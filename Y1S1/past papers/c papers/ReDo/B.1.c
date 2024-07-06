#include <stdio.h>

int main( void )
{
	int x,y,z = 97;
	
	for(x = 5; x >= 0; --x )
	{
		for(y = 0; y < x ; ++y)
		{
			printf( " %c", z );
		}
		printf( "\n" );
		++z;
	}
	return 0;
}
