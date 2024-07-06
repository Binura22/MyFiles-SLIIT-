#include <stdio.h>
 int main(void){
 	//veriable declairation
 	int roomop,noofguests,noofdays,adtours;
 	char yesorno;
 	float tourchargers=0,roomcharges,total,totaltour;
 	
 	//get inputs by users
 	printf("Input Room Option :");
 	scanf("%d",&roomop);
 	
 	printf("Number of guests :");
 	scanf("%d",&noofguests);
 	
 	printf("Number of Days :");
 	scanf("%d",&noofdays);
 	
 	//selection and calculate hotel room prices for no of guests
 	if(roomop == 1){
 		if(noofguests>0 && noofguests<2){
 			roomcharges=45000*noofguests * noofdays;
		 }
		else if(noofguests>3 && noofguests<5){
			roomcharges=44000*noofguests * noofdays;
		}
		else{
			roomcharges=43000*noofguests * noofdays;
		}
	 }
	
	else if(roomop == 2){
		if(noofguests>0 && noofguests<2){
 			roomcharges=40000*noofguests * noofdays;
		 }
		else if(noofguests>3 && noofguests<5){
			roomcharges=38000*noofguests * noofdays;
		}
		else{
			roomcharges=35000*noofguests * noofdays;
		}
	}
	
	else if(roomop == 3){
		if(noofguests>0 && noofguests<2){
 			roomcharges=37500*noofguests * noofdays;
		 }
		else if(noofguests>3 && noofguests<5){
			roomcharges=35000*noofguests * noofdays;
		}
		else{
			roomcharges=32000*noofguests * noofdays;
		}
	}
	
	else{printf("Error \n");
	}
 	
	 //ask for additional tours from user 
 	printf("Do you need any additional tours ( y/n) :");
 	scanf("%s",&yesorno);
 	
 	//start while loop for get more additional tour details 
 	
 while((yesorno != 'n' && yesorno != 'N') && (yesorno == 'y' || yesorno == 'Y')){
 	
	printf(" Input your option :");
 	scanf("%d",&adtours);
 	
 	//selection and calculate additional tour prices
 	
	if(adtours==1){
 		tourchargers=3500 * noofguests;
	 }
	
	else if(adtours==2){
		tourchargers=1000 * noofguests;
	}
 	
	 else if(adtours==3){
		tourchargers=1500 * noofguests;
	}
	
	else if(adtours==4){
		tourchargers=2000 * noofguests;
	}
 	
 	totaltour=totaltour+tourchargers;
 	
 	printf("Do you need any additional tours ( y/n) :");
 	scanf("%s",&yesorno);
 	
 }
    //calculate final total 
 	total = totaltour + roomcharges;
 	printf("Total Price : %.2f",total);
 
 return 0;}
