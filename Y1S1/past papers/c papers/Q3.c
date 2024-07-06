#include <stdio.h>
//create calcRemainingFuel function 
 float calcRemainingFuel (int vehicleType, float usedFuelQuota){
 	float RemainingFuel,allowedfuelQuota;
 	
 	switch(vehicleType){
    	case 1:allowedfuelQuota= 5;
    		break;
    	case 2:allowedfuelQuota = 20;
    		break;
    	case 3:allowedfuelQuota = 20;
    		break;
    	case 4:allowedfuelQuota = 30;
    		break;
		default:printf("Error \n");
		}
    		
 	RemainingFuel = allowedfuelQuota - usedFuelQuota;
 	return RemainingFuel;
 }
 //create calcFuelcost function
 float calcFuelcost (int vehicleType, float usedFuelQuota){
 	float calcFuelcost,price;
 	 
	  switch(vehicleType){
    	case 1:price =370.00 ;
    		break;
    	case 2:price =370.00;
    		break;
    	case 3:price =510.00;
    		break;
    	case 4:price =370.00;
    		break;
		default:printf("Error \n");
			}
 	
	calcFuelcost = usedFuelQuota * price;
 	return calcFuelcost;
 }
 //create displayDetails function
  void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost){
    
	printf("Vehicle type\t Quota used Quota\t Remaining Fuel\t cost \n");
 	printf("%d %20.2f %24.2f %17.2f \n",vType,usedFuelQuota,remainingQuota,cost);
 	printf("\n");
}
//Main function	
int main(void){
	int Vtype;
	float UsedFQ,RF,CC,calcFuelCost;
	
	while (Vtype!=-1){
 	
	 printf("Enter vehicle type :");
 	 scanf("%d",&Vtype);
 	 printf("Enter used fuel quota :");
 	 scanf("%f",&UsedFQ);
 	 printf("\n");
	 //Calling functions
 	
	RF= calcRemainingFuel(Vtype,UsedFQ); //calculate remainig fuel
 	
    CC= calcFuelcost (Vtype,UsedFQ); //calculate fuel cost
    
    displayDetails(Vtype,UsedFQ,RF,CC); //diaplay grid
}
    
    return 0;
}

