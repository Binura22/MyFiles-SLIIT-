#include <stdio.h>

int main( void )
{
	int i;
	int intArr[10];
	int positiveNum[10];
	int negativeNum[10];
	
	for( i = 0; i < 10; ++i )
	{
		printf("Enter Number :");
		scanf("%d", &intArr[i] );
		
	}
	
	printf("\n");
	
	printf("Number series:");
	
	for( i = 0; i < 10; ++i )
	{
		printf("%d ",intArr[i] );
	}
	
	printf("\n");
	
	printf("Positive Numbers:");
	
	for( i = 0; i < 10; ++i )
	{
		if( intArr[i] >= 0)
		{
			positiveNum[i] = intArr[i];
			printf("%d ",positiveNum[i]);
		}
	}
	
	printf("\n");
	
	printf("Negative Numbers:");
	
	for( i = 0; i < 10; ++i )
	{
		if( intArr[i] < 0)
		{
			negativeNum[i] = intArr[i];
			printf("%d ",negativeNum[i]);
		}
	}
	
	return 0;
}
