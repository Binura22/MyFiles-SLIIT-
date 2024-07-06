#include <stdio.h>

int main( void )
{
	int i;
	int num[8];
	int count = 0;
	
	for( i = 0; i < 8; ++i)
	{
		printf("Enter number:");
		scanf("%d", &num[i]);
		
	}
	printf("\n");
	
	printf("Number arry:");
	
	for( i = 0; i < 8; ++i)
	{
		printf("%d ", num[i]);
		
		if( num[i] == 1 && num[i+1] == 3 )
		{
			count++;
		}
		
	}
	printf("\n");
	
	printf("Number of times the pattern 1 3 appear :%d", count);
	
	return 0;
}
