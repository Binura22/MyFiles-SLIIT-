#include <stdio.h>

int main(void)
{
	int x,y,z;
	
	for(x=1; x<=5; ++x)
	{
		for(y=0; y<x; ++y)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
