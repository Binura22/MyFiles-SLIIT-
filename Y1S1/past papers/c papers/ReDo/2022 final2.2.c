#include <stdio.h>

int main( void )
{
	int i, j,num;
	int identityArr[4][4];
	int value=0;
	
	for( i = 0; i < 4; i++)
	{
		printf("Values for row %d\n",i+1);
		
		for(j = 0; j < 4; j++)
		{
			printf("   Enter element %d:",j+1);
			scanf("%d",&identityArr[i][j]);
		}
		printf("\n");
	}
	
	for( i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if( identityArr[i+1][i+1] == 1 )
			{
				value = 1;
				
			}
			else
			{
				value = 0;
				
			}
	
			printf("%d ",identityArr[i][j]);		
		}
		
		printf("\n");
	}
	
	if(value = 1)
	{
		printf("It is a identity matrix \n");
	}
	if(value = 0)
	{
		printf("It is not a identity matrix \n");
	}
	
	
	return 0;
}
