#include <stdio.h>

int main( void )
{
	int i;
	int myArry[10];
	int largeNum[10];
	float Total,Avg;
	
	for( i = 0; i < 10 ; ++i )
	{
		printf("Enter Number:");
		scanf("%d", &myArry[i]);
		
	}
	
	printf("\n");
	
	printf("Enter the number series:");
	for( i = 0; i < 10 ; ++i )
	{
		printf("%d ",myArry[i]);
		
		Total = Total + myArry[i];
	}
	printf("\n");
	Avg = Total/10.0 ;
	printf("Average:%.2f",Avg );
	
	
	printf("\n");
	printf("myArray:");
	for( i = 0; i < 10 ; ++i )
	{
		printf("%d ",myArry[i]);
		
		Total = Total + myArry[i];
	}
	
	printf("\n");
	printf("LargeNum:");
	
	for( i = 0; i < 10 ; ++i )
	{
		if( myArry[i] > Avg)
		{
			printf("%d ",myArry[i]);
		}
		
	}
	
	return 0;
}
