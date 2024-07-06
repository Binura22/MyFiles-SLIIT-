#include <stdio.h>

int main(void){

//variable declaration
 int airoption,noofseats,extraop;
 
 char classtype,yesorno;
 
 float total,seatprice,extraprice,totalextraprice=0;

//get input by user	
 printf("Input Airline Option :");
 scanf("%d",&airoption);
 
 //selection airline option and classtype
 	switch(airoption){
 		case 1:switch(classtype){
 			     case 'E':seatprice = 36500;
 			     break;
 			     case 'B':seatprice = 77600;
 			     break;
				 }
			break;	 
		case 2:switch(classtype){
 			     case 'E':seatprice = 35800;
 			     break;
 			     case 'B':seatprice = 76500;
 			     break;
				 }		 
			break;	 
		case 3:switch(classtype){
 			     case 'E':seatprice = 54600;
 			     break;
 			     case 'B':seatprice = 84700;
 			     break;
				 }	
			break;
		case 4:switch(classtype){
 			     case 'E':seatprice = 28500;
 			     break;
 			     case 'B':seatprice = 42800;
 			     break;
				 }
			break;
		default:printf("Invalid option \n");
				break;
	  }
	  printf("Class type ( E/ B ) :");
	  scanf("%s",&classtype);
 
 	  printf("Number of seats :");
 	  scanf("%d",&noofseats);
	 	//ask extra services from user
	 	printf("Do you need any extra services ( y/n) :");
	 	scanf("%s",&yesorno);
	 	//start loop for extra services
	 
	 while((yesorno !='n' && yesorno !='N') || (yesorno =='y' || yesorno =='Y')){
	 	
	 	printf("Input your option :");
	 	scanf("%d",&extraop);
            //select extra service type	 	
	 		switch(extraop){
	 			case 1:extraprice = 7800;
	 			break;
	 			case 2:extraprice = 1500;
	 			break;
	 			case 3:extraprice = 19500;
	 			break;
	 			case 4:extraprice = 2000;
	 			break;
			 }
			 //calculate total extra services prices
			 totalextraprice = totalextraprice + extraprice;

	 	
		printf("Do you need any extra services ( y/n) :");
	    scanf("%s",&yesorno);
	 
	}//end of the loop
	 
	 	//calculate total price
	 	total = (seatprice * noofseats)+ totalextraprice;
	 	//display total price
	 	printf("Total Price : %.2f",total);
	 
	 return 0;}//end of the main function
