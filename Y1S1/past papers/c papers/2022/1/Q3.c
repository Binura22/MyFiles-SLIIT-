#include <stdio.h>
#include <assert.h>

float calcRemainigFuel (int vehicleType, float usedFuelQuota)
{	
	int remaining_fuel;
	
	switch(vehicleType)
	{
		case 1: remaining_fuel = 5 - usedFuelQuota;
			break;
			
		case 2: remaining_fuel = 20 - usedFuelQuota;
			break;
			
		case 3: remaining_fuel = 20 - usedFuelQuota;
			break;
			
		case 4: remaining_fuel = 30 - usedFuelQuota;
			break;
			
		//default:
	}
	return remaining_fuel;
}

float calcFuelCost (int vehicleType, float usedFuelQuota)
{	
	float cost;
	
	switch(vehicleType)
	{
		case 1:cost = 370.00 * usedFuelQuota;
			break;
			
		case 2:cost = 370.00 * usedFuelQuota;
			break;
			
		case 3:cost = 510.00 * usedFuelQuota;
			break;
			
		case 4:cost = 370.00 * usedFuelQuota;
			break;
			
		//default:
	}
	return cost;
}

void displayDetails ( int vType, float usedFuelQuota, float remainigQuota,float cost)
{
	printf("\n");
	printf("Vehicle type \t Quota used \t Quota Remaining \t Fuel Cost \n");
	printf("------------ \t ---------- \t --------------- \t --------- \n");
	printf("%6d \t %11.f \t %13.f \t %24.2f\n", vType, usedFuelQuota,remainigQuota,cost);
	
}

void testcalcFuelCost ()
{
	assert( calcFuelCost ( 1, 5) == 1850);
	assert( calcFuelCost ( 3, 10) == 5100);
}

int main ( void )
{
	
	int vType;
	float usedQuota;
	float remaining;
	float cost;
	
	testcalcFuelCost ();
	
	do{	
		printf("Enter vehicle type :");
		scanf("%d", &vType);
		
		if( vType == -1)
		{
			break;
		}
		
		printf("Enter used fuel quota :");
		scanf("%f", &usedQuota);
		
		remaining =calcRemainigFuel (vType, usedQuota);
		
		cost = calcFuelCost (vType, usedQuota);
		
		displayDetails (vType, usedQuota, remaining, cost );
		
		printf("\n");
		
	}while( vType != -1 );
	
	return 0;
}
