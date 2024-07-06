#include <stdio.h>

int main( void )
{
	int j;
	int rate[5];
	int rate1=0,rate2=0,rate3=0,rate4=0,rate5=0;


for( j = 0 ; j < 5 ; ++j )
{
	
	printf("Pls input the service rating(1-5):");
	scanf("%d", &rate[j]);
	
		if(rate[j] == -1)
			{
				break;
			}
		if(rate[j] < 1 || rate[j] > 5)
		{
			printf("Error! \n");
			--j;
		}	
		
}
	
printf("\n");
	
for( j = 0; j < 5; ++j )
{
	
    if( rate[j] == 1)
    {
    	rate1++ ;
	}
	else if( rate[j] == 2)
	{
		rate2++ ;
	}
	else if( rate[j] == 3)
	{
		rate3++ ;
	}
	else if( rate[j] == 4)
	{
		rate4++ ;
	}
	else if( rate[j] == 5)
	{
		rate5++ ;
	}
	
}	
	printf("Rating \t Number of response \n");
	printf("1 \t %d \n",rate1);
	printf("2 \t %d \n",rate2);
	printf("3 \t %d \n",rate3);
	printf("4 \t %d \n",rate4);
	printf("5 \t %d \n",rate5);
	
	
	return 0;
}
