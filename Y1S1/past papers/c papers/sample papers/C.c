#include <stdio.h>
#include <assert.h>

 int main(void){
 	int pizzaop,noofpizza,topop;
 	char size,yesorno;
 	float normalprice,extraprice,totalprice,total1=0;
 	
 	
 	printf("Input Pizza Option :");
 	scanf("%d",&pizzaop);
 	assert( pizzaop == 1 || pizzaop == 2 || pizzaop == 3 );
 	
	printf("Size of the Pizza ( P/M/L) :");
 	scanf("%s",&size);
 	assert( size == 'P' || size == 'M' || size == 'L' );
 	
 	printf("Number of Pizzas : ");
 	scanf("%d",&noofpizza);
 	
 	
 	 switch(pizzaop){
 	 	
		  case 1:
 	 		if(size =='P'){
 	 			normalprice = 560;
			  }
			else if(size =='M'){
				normalprice = 920;
			}
			else if(size =='L'){
				normalprice = 1800;
			}
			else{printf("Invalid pizza size \n");
			}
		break;
		
		case 2:
 	 		if(size =='P'){
 	 			normalprice = 340;
			  }
			else if(size =='M'){
				normalprice = 660;
			}
			else if(size =='L'){
				normalprice = 1300;
			}
			else{printf("Invalid pizza size \n");
			}
		break;
		
		case 3:
 	 		if(size =='P'){
 	 			normalprice = 760;
			  }
			else if(size =='M'){
				normalprice = 1100;
			}
			else if(size =='L'){
				normalprice = 2100;
			}
			else{printf("Invalid pizza size \n");
			}
		break;
		
		default:printf("invalid pizza option");
		}
 	
	printf("Do you need any extra toppings ( y/n) :");
 	scanf("%s",&yesorno);
 	
 	while((yesorno !='n' && yesorno !='N') || (yesorno =='y' || yesorno =='Y')){
 		
 	 printf("Input your option : ");
 	 scanf("%d",&topop);
 	 
 		switch(topop){
 			case 1:extraprice = 320 ;
 		break;
 			case 2:extraprice = 140 ;
 		break;
 			case 3:extraprice = 130 ;
 		break;
 			case 4:extraprice = 150 ;
 		break;
 		}
 		
 		total1 = total1 + extraprice;
 		
 		
 		printf("Do you need any extra toppings ( y/n) :");
 		scanf("%s",&yesorno);
 		}
 		
 	totalprice = (total1 + normalprice)*noofpizza;
 	
 	printf("Total Price Rs :%.2f \n",totalprice);
 	
 
 	
 	return 0;}
