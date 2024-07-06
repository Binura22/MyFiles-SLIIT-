#include <stdio.h>
 int main(void){
 	int noofrooms,noofnights;
 	char paymethod,roomtype,con;
 	float rate,discountper,amountbeforedis,discount,amount;
 	
 	while(con!='n' && con!='N'){
 	printf("Enter your room type :");
 	scanf("%s",&roomtype);
 	printf("Number of nights :");
 	scanf("%d",&noofnights);
 	
      
      
	  switch(roomtype){
      	case 'D':rate = 31000.00;
      	break;
      	case 'S':rate = 35000.00;
      	break;
      	case 'C':rate = 50000.00;
      	break;
      	case 'E':rate = 75000.00;
      	break;
      	case 'P':rate = 100000.00;
      	break;
      	default:printf("invalid room type \n");}
    
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
   
   printf("Do you want to continue:");
   scanf("%s",&con);
   
   }
   

 return 0;}
