#include <stdio.h>
 int main(void){
 	int roomtype,noofdays;
 	char accommodation,rewardtype;
 	float amount ,discountper,discount, amountbefordis,price;
 	
 	printf("Enter type of room :");
 	scanf("%d",&roomtype);
 	
 while(roomtype !=-1){
	 
 	printf("Enter Accommodation Basis (F/H) :");
 	scanf("%s",&accommodation);
 	
 	printf("Enter No of days :");
 	scanf("%d",&noofdays);
 	
 	printf("Enter Reward Card Type ( G, S, B ) :");
 	scanf("%s",&rewardtype);
 	
 	switch(roomtype){
 		case 1:if (accommodation ='F'){
 			   price = 25555.00;}
 			   else if (accommodation ='H'){
 			   price = 17250.00;}
			break;
		case 2:if (accommodation ='F'){
 			   price = 17500.00;}
 			   else if (accommodation ='H'){
 			   price = 12250.00;}
 			break;
 		case 3:if (accommodation ='F'){
 			   price = 9000.00;}
 			   else if (accommodation ='H'){
 			   price = 7250.00;}
 			break;
 		default:printf("Invalid Type of room\n");}
 		
 	if(rewardtype ='G')
	 {discountper = 0.125;}
	else if(rewardtype ='S')
	 {discountper = 0.115;}
	else if(rewardtype ='B')
	 {discountper = 0.095;}
 		
	discount= price * noofdays * discountper;
	amountbefordis = price * noofdays;
	amount = amountbefordis - discount;
	
	printf("Amount(Rs.) :%.2f \n",amount);
	printf("\n");
	
	printf("Enter type of room :");
 	scanf("%d",&roomtype); }
 	
return 0; }
