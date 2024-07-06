#include <stdio.h>

int main(void)
{
	int i;
	int numArr[8];
	int move;
	
	for( i = 0; i < 8; ++i)
	{
		printf("Enter number:");
		scanf("%d", &numArr[i]);
	}
	
	printf("\n");
	for( i = 0; i < 8; ++i)
	{
		printf("%d ",numArr[i]);
	}
	printf("\n");
	
	printf("Enter number for move:");
	scanf("%d", &move);
	
	printf("\n");
	for( i = 8-move; i < 8; ++i)
	{
		printf("%d ",numArr[i]);
	}
	for( i = 0; i < 8-move; ++i)
	{
		printf("%d ",numArr[i]);
	}
	
	return 0;
}
