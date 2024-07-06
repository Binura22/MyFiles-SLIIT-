#include <stdio.h>
#include <assert.h>

//user defined function called calcRemainingFuel 
float calcRemainingFuel (int vehicleType, float usedFuelQuota)
{	
	float remainingFuelQuota,allowedFuelQuota;
	
	//choose aloowed fuel quota by vehicleType
	switch(vehicleType)
	{
		case 1: allowedFuelQuota = 5;
			break;
		case 2: allowedFuelQuota = 20;
			break;
		case 3: allowedFuelQuota = 20;
			break;
		case 4: allowedFuelQuota = 30;
			break;
		default:printf( "Invalid vehicle type" );
		
	}
	//calculate remainig fuel quota
	remainingFuelQuota = allowedFuelQuota - usedFuelQuota;
	
	return remainingFuelQuota;
}//end of calcRemainingFuel function

//user defined function called calcFuelcost
float calcFuelcost (int vehicleType, float usedFuelQuota)
{	
	float fuelCost,price;
	//choose price by using switch-case
	switch(vehicleType)
	{
		case 1: price = 370.00;
			break;
		case 2: price = 370.00;
			break;
		case 3: price = 510.00;
			break;
		case 4: price = 370.00;
			break;
		default:printf( "Invalid vehicle type" );
	}
	//calculate fuel cost
	fuelCost = usedFuelQuota * price;
	
	return fuelCost;
}//end of calcFuelcost function

////user defined function called displayDetails
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost)
{	
	//display
	printf( "Vehicle type \t Quota used \t Quota Remaining \t Fuel cost \n" );
	printf( "------------ \t ---------- \t --------------- \t --------- \n" );
	printf( "%6d \t %13.2f \t %13.2f \t %23.2f \n", vType, usedFuelQuota, remainingQuota, cost );
}//end of displayDetails function

int main( void )//stat the main function
{	
	int VehicleType;
	float Cost,UsedFuelQuota,RemainingQuota;
do{
	
	//get vehicle type and usedQuota from user
	printf( "Enter the vehicle type :" );
	scanf( "%d", &VehicleType);
	assert( VehicleType != -1 );
	
	printf( "Enter used fuel quota :" );
	scanf( "%f", &UsedFuelQuota);
	assert (UsedFuelQuota >= 0 );
	
	//function call calcRemainingFuel
	RemainingQuota = calcRemainingFuel (VehicleType, UsedFuelQuota);
	
	//function call calcFuelcost
	Cost = calcFuelcost (VehicleType, UsedFuelQuota);
	
	//function call displayDetails
	displayDetails(VehicleType, UsedFuelQuota, RemainingQuota, Cost);
	
}while(  VehicleType != -1 );
	
	return 0; //end of the main function
}
