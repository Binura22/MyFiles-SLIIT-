# include <stdio.h>
  int main(void){
  	
	  int customertype;
	  
	  float billamount,discount,finalbill;
	  
	  printf("Customer Type :");
	  scanf("%d",&customertype);
	  printf("\n");
	  printf("Bill Amount :RS.");
	  scanf("%f",&billamount);
	  printf("\n");
	  
	  switch(customertype)
	  	{
	  	case 1:if(billamount <= 2000)
		  		{
		  			discount = 0.15 * billamount;
	  		    }
	  		    else
				{
					discount = 0.25 * billamount;
				}
			break;
			
		case 2:if(billamount >= 3000)
		  		{
		  			discount = 0.15 * billamount;
	  		    }
	  		    else
				{
					discount = 0 * billamount;
				}
			break;
	  	}
	  	
	  	finalbill = billamount - discount;
	  	
  	printf("Discount Amount:RS.%.2f \n",discount);
  	printf("\n");
  	printf("Final Bill Amount:RS.%.2f \n",finalbill);
  	
  	return 0;
  }
