#include <stdio.h>

int main ( void )
{
	int i,j,no;
	int ratings[3][4];
	float avg[i], total;
	float hi=0;
	
	for( i = 0; i < 3; i++ )
	{
		printf("Movie %d \n",i+1);
		
		for( j = 0; j < 4; j++ )
		{
			printf("  Enter review %d (0-9):",j+1);
			scanf("%d", &ratings[i][j]);
		}
		printf("\n");
	}
	
	printf("\t Reviewers \n");
	
	for( i = 0; i < 3; i++ )
	{
		total = 0;
		
		printf("Movie %d :",i+1);
		
		for( j = 0; j < 4; j++ )
		{
			printf("%d  ", ratings[i][j]);
			total = total + ratings[i][j];
		}
		avg[i]= total/3.0;
		printf("\n");
	}
	
	printf("\n");
	
	for( i = 0; i < 3; i++ )
	{
		printf("Average rating for movie %d:%.2f \n", i+1, avg[i]);

	}
	
	printf("\n");
	
	for( i = 0; i < 3; i++ )
	{
		if(avg[i] > hi)
		{
			hi = avg[i];
			no = i+1;
		}
		
	}
	printf("Heisest rating movie is :Movie %d\n",no);
	return 0;
}
