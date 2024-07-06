#include <stdio.h>

int main( void )
{
	int x,y,z;
	
	for(x=1; x<=2; ++x)
	{
		for(y=1; y<=2; ++y)
		{
			for(z=1; z<=2; ++z)
			{
				printf("[%d %d %d]", x, y, z);
				printf("\n");
			}
		}
	}
	return 0;
}
