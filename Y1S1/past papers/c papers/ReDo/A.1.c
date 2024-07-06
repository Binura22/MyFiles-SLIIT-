#include <stdio.h>

int main( void )
{
	int x,y;
	int A=97;
	
	for(x=1; x<=5; ++x)
	{
		for(y=1; y<=x; ++y)
		{
			printf(" %c",A);	
		}
		++A;
		printf("\n");	
	} 
	return 0;
}
