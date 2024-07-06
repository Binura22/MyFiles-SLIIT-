#include <stdio.h>

int main( void )
{
	int x,y,z = 97;
	int i,j,k = 97;
	
	for(i = 1; i <= 5; ++i )
	{
		for(j = 1; j <= i ; ++j)
		{
			printf( " %c", k );
		}
		printf( "\n" );
		++k;
	}
	
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
