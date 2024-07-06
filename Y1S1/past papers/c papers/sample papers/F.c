#include <stdio.h>
	int main(void){
		
		int noofrooms,days;
		char roomtype,paymethod,yesorno;
		float rate,total;
		
do{
	printf("Input the room type :");
	scanf("%s",&roomtype);

	switch(roomtype){
		case 'D':printf("Number of rooms :");
				 scanf("%d",&noofrooms);
				 
				 printf("Number of nights :");
				 scanf("%d",&days);
				 
				 printf("paying method (cash - M or credit card -C):");
				 scanf("%s",&paymethod);
				 
				 if(paymethod == 'M')
				 {
				 	rate = 31000.00 * days * noofrooms;
				 	printf("Your payment is :%.2f\n",rate);
				 	
				 	printf("\n");
				 	printf("Do you want to continue :");
					scanf("%s",&yesorno);
				 }
				 else if(paymethod == 'C')
				 {
				 	rate = (31000.00 * days * noofrooms) * 0.90 ;
				 	printf("Your payment is :%.2f\n",rate);
				 	
				 	printf("\n");
				 	printf("Do you want to continue :");
					scanf("%s",&yesorno);
				 }
				 else
				 {
				 	printf("Invalid payment method \n");
				 	break;
				 }
			break;	 	
		
		case 'S':printf("Number of rooms :");
				 scanf("%d",&noofrooms);
				 
				 printf("Number of nights :");
				 scanf("%d",&days);
				 
				 printf("paying method (cash - M or credit card -C):");
				 scanf("%s",&paymethod);
				 
				 if(paymethod == 'M')
				 {
				 	rate = 35000.00 * days * noofrooms;
				 	printf("Your payment is :%.2f\n",rate);
				 	
				 	printf("\n");
				 	printf("Do you want to continue :");
					scanf("%s",&yesorno);
				 }
				 else if(paymethod == 'C')
				 {
				 	rate = (35000.00 * days * noofrooms) * 0.90 ;
				 	printf("Your payment is :%.2f\n",rate);
				 	
				 	printf("\n");
				 	printf("Do you want to continue :");
					scanf("%s",&yesorno);
				 }
				 else
				 {
				 	printf("Invalid payment method \n");
				 	break;
				 }
			break;	 	
		
		case 'C':printf("Number of rooms :");
				 scanf("%d",&noofrooms);
				 
				 printf("Number of nights :");
				 scanf("%d",&days);
				 
				 printf("paying method (cash - M or credit card -C):");
				 scanf("%s",&paymethod);
				 
				 if(paymethod == 'M')
				 {
				 	rate = 50000.00 * days * noofrooms;
				 	printf("Your payment is :%.2f\n",rate);
				 	
				 	printf("\n");
				 	printf("Do you want to continue :");
					scanf("%s",&yesorno);
				 }
				 else if(paymethod == 'C')
				 {
				 	rate = (50000.00 * days * noofrooms) * 0.90 ;
				 	printf("Your payment is :%.2f\n",rate);
				 	
				 	printf("\n");
				 	printf("Do you want to continue :");
					scanf("%s",&yesorno);
				 }
				 else
				 {
				 	printf("Invalid payment method \n");
				 	break;
				 }
			break;
			
		case 'E':printf("Number of rooms :");
				 scanf("%d",&noofrooms);
				 
				 printf("Number of nights :");
				 scanf("%d",&days);
				 
				 printf("paying method (cash - M or credit card -C):");
				 scanf("%s",&paymethod);
				 
				 if(paymethod == 'M')
				 {
				 	rate = 75000.00 * days * noofrooms;
				 	printf("Your payment is :%.2f\n",rate);
				 	
				 	printf("\n");
				 	printf("Do you want to continue :");
					scanf("%s",&yesorno);
				 	
				 }
				 else if(paymethod == 'C')
				 {
				 	rate = (75000.00 * days * noofrooms) * 0.90 ;
				 	printf("Your payment is :%.2f\n",rate);
				 	
				 	printf("\n");
				 	printf("Do you want to continue :");
					scanf("%s",&yesorno);
				 }
				 else
				 {
				 	printf("Invalid payment method \n");
				 	break;
				 }
			break;	
			
		case 'P':printf("Number of rooms :");
				 scanf("%d",&noofrooms);
				 
				 printf("Number of nights :");
				 scanf("%d",&days);
				 
				 printf("paying method (cash - M or credit card -C):");
				 scanf("%s",&paymethod);
				 
				 if(paymethod == 'M')
				 {
				 	rate = 100000.00 * days * noofrooms;
				 	printf("Your payment is :%.2f\n",rate);
				 	
				 	printf("\n");
				 	printf("Do you want to continue :");
					scanf("%s",&yesorno);
				 }
				 else if(paymethod == 'C')
				 {
				 	rate = (100000.00 * days * noofrooms) * 0.90 ;
				 	printf("Your payment is :%.2f\n",rate);
				 	
				 	printf("\n");
				 	printf("Do you want to continue :");
					scanf("%s",&yesorno);
				 	
				 }
				 else
				 {
				 	printf("Invalid payment method \n");
				 	break;
				 }
			break;
		default :printf("Invalid room type !\n");	 		 		
				 	
		}
		
    }while((yesorno !='n' && yesorno!='N') || (yesorno =='y' && yesorno =='Y'));
	
		return 0;
		
 }
