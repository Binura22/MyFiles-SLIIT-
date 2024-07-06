#include <stdio.h>

int main( void )
{
	int numArr[8];
	int i;
	int move;
	
	for( i = 0; i < 8; ++i )
	{
		printf("Enter number %d:", i+1);
		scanf("%d", &numArr[i]);
		
	}
	printf("Enter number to move:");
	scanf("%d", &move);
	
	for( i = 8-move; i < 8; ++i )
	{
		printf("%d ", numArr[i]);
	}
	for( i = 0; i < 8-move; ++i )
	{
		printf("%d ", numArr[i]);
	}
	
	return 0;
}
