#include <stdio.h>
#include <string.h>

int main( void )
{
	int i, j, account[5];
	float amount[5], max1=0, max2=0;
	float Wamount=0, Damount=0 ;
	char name[5], type[5], maxname1, maxname2 ;
	
	for(i = 1 ; i <= 5; ++i)
	{
		
		printf("Enter Account Number: ");
		scanf("%d", &account[i] );
		
		printf("Enter Your Name: ");
		scanf(" %s", &name );
		
		printf("Transaction type(W/D): ");
		scanf(" %c", &type[i] );
		
		printf("Amount: ");
		scanf(" %f", &amount[i] );
		
		printf("\n");
		
   		if( type[i] =='w'|| type[i] =='W')
		{
			Wamount = Wamount + amount[i];
			
			if(amount[i] > max1)
			{
				maxname1 = name[i];
			}
		}
		else if ( type[i] =='d'|| type[i] =='D')
		{
			Damount = Damount + amount[i];
			
			if(amount[i] > max2)
			{
				maxname2 = name[i];
			}
		}
	}
	
	printf("Total deposit amount: %.2f \n",Damount);
	printf("Total withdrawal amount: %.2f \n",Wamount);
	printf("Name of the coustomer with maximum deposit amount:%s \n",maxname1);
	printf("Name of the coustomer with maximum withdraw amount:%s \n",maxname2);
	
	return 0;
}
