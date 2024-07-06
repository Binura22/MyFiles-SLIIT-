#include <stdio.h>

int main( void )
{
	int numArr[6];
	int oddNum[6];
	int evenNum[6];
	int i;
	
	for(i = 0; i < 6 ;++i)
	{
		printf("Enter Number:");
		scanf("%d", &numArr[i]);
		
	}
	printf("\n");
	
	printf("Number series:");
	for(i = 0; i < 6 ;++i)
	{
		printf(" %d ", numArr[i]);
		
	}
	printf("\n");
	
	printf("Odd Numbers:");
	for(i = 0; i < 6 ;++i)
	{
		if( numArr[i]%2 == 1 )
		{
			oddNum[i] = numArr[i];
			printf("%d ", oddNum[i]);
		}
			
	}
	printf("\n");
	
	printf("Even Numbers:");
	for(i = 0; i < 6 ;++i)
	{
		if( numArr[i]%2 == 0 )
		{
			evenNum[i] = numArr[i];
			printf("%d ", evenNum[i]);
		}
		
	}
	
	return 0;
}
