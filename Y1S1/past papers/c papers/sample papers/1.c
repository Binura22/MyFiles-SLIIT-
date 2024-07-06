# include <stdio.h>
 int main (void){
 	int months;
 	float bonus,basicsal;
 	
 	printf("Number of months :");
 	scanf("%d",&months);
 	
	printf("Basic salary :");
 	scanf("%f",&basicsal);
 	
		if(months >= 6)
		 {
			
			if(months == 12)
			 {	
				if(basicsal <= 45000)
				 {	
					bonus = (months * basicsal) + basicsal;
				 }
				else
				 {
					bonus = months * basicsal;
				 }
			 }
				
			else
			 {
					bonus = months * basicsal;
			 }
		 }
		 else
		 {
 			bonus = 0 ;
		 }
			
	printf("Bonus : %.2f",bonus);	 
		
 	
 	
 	return 0;
 }
