#include <stdio.h>
 int main(void){
 	int noofrooms,noofnights;
 	char paymethod,roomtype,con;
 	float rate,discountper,amountbeforedis,discount,amount;
 	
 	while(con!='n' && con!='N'){
 		
 	printf("Enter your room type :");
 	scanf("%s",&roomtype);
 	
	  if(roomtype =='D'){
      	rate = 31000.00;}
      
	  else if(roomtype =='S'){	
      	rate = 35000.00;}
      
	  else if(roomtype =='C'){
	    rate = 50000.00;}
      
	  else if(roomtype =='E'){
	    rate = 75000.00;}
      
	  else if(roomtype =='P'){
	    rate = 100000.00;}
      
	  else {printf("invalid room type \n");
	    break;}
   
    printf("Number of nights :");
 	scanf("%d",&noofnights);
 	
	amountbeforedis = rate * noofnights;
    
	printf("Paying method(M/C) :");
 	scanf("%s",&paymethod); 	
      	
    switch(paymethod){
    	
		case 'M':discountper = 0;
    	break;
    	
		case 'C':discountper = 0.1;
    	break;
    	default :printf("Error \n");
	}
	
	discount =amountbeforedis* discountper;
	amount = amountbeforedis - discount;
   
   
   printf("Your total bill is : %.2f\n",amount);
   printf("\n");
   printf("Do you want to continue:");
   scanf("%s",&con);
   
   }
   

 return 0;}
