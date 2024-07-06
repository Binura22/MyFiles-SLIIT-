#include <stdio.h>

int main ( void )
{
	int i, j;
	int userRating[5];
	int count1 =0 ,count2 = 0 ,count3 = 0,count4 = 0,count5 = 0;
	
	for( i = 0; i < 5 ;++i )
	{		
		printf("Enter rating (1-5):");
		scanf("%d", &userRating[i]);
		
		if( userRating[i] == -99 )
		{
			break;
		}
	}
	
	for( i = 0; i < 5 ;++i )
	{
		if( userRating[i] == 1)
		{
			count1 ++;
		}
		else if( userRating[i] == 2 )
		{
			count2 ++;
		}
		else if( userRating[i] == 3 )
		{
			count3 ++;
		}
		else if( userRating[i] == 4 )
		{
			count4 ++;
		}
		else if( userRating[i] == 5 )
		{
			count5 ++;
		}
		
	}
	printf("\n");
	
	printf("1 ");
	for( i = 0; i < 1 ;++i )
	{		
		for( j = 0;  j<count1; ++j)
		{ 
			printf("*");
		}
		printf("\n");
	}
	
	printf("2 ");
	for( i = 0; i < 1 ;++i )
	{		
		for( j = 0;  j<count2; ++j)
		{ 
			printf("*");
		}
		printf("\n");
	}
	
	printf("3 ");
	for( i = 0; i < 1 ;++i )
	{		
		for( j = 0;  j < count3; ++j)
		{ 
			printf("*");
		}
		printf("\n");
	}
	
	printf("4 ");
	for( i = 0; i < 1 ;++i )
	{		
		for( j = 0;  j < count4; ++j)
		{ 
			printf("*");
		}
		printf("\n");
	}
	
	printf("5 ");
	for( i = 0; i < 1 ;++i )
	{		
		for( j = 0;  j<count5; ++j)
		{ 
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
