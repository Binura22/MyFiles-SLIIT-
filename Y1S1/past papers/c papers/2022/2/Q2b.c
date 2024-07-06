#include <stdio.h>

int main( void )
{
	int i,j;
	int identityArr[4][4];
	int count1 = 0;
	int count2 = 0;
	
	for( i = 0; i < 4; i++ )
	{
		printf("Values for row %d \n",i+1);
		for( j = 0; j < 4; j++ )
		{
			printf("  Enter element %d :",j+1);
			scanf("%d", &identityArr[i][j]);
		}
		
	}
	
	for( i = 0; i < 4; i++ )
	{
			for( j = 0; j < 4; j++ )
			{
				printf("%d ", identityArr[i][j]);
				if( identityArr[i][j] == 0)
				{
					count1++;
				}
				
			}
		if( identityArr[i][i] == 1)
		{
			count2++;
		}
		printf("\n");
	}
	
	if( count2 == 4 && count1 == 12)
	{
		printf("It is a identity matrix \n");
	}
	else
	{
		printf("It is not a identity matrix \n");
	}
	
	return 0;
}
