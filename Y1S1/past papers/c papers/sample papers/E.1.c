# include <stdio.h>
//start of main function
	int main(void){
		
		int noofchildren;
		char instype,yesorno,subtype;
		float premium;
		// start of do-while loop
	do{
		//get inputs from user
		printf("Insurance Type :");
		scanf("%s",&instype);
		//select insurance type using switch-case and calculation
		switch(instype){
		
			case 'A':printf("Family or Individual ( F- family and I -individual) :");
					 scanf("%s",&subtype);
					 
					 if(subtype == 'I') 
					 {
					 	premium = 4500.00;
					 	printf("Total Amount :%.2f \n",premium);
					 }
					 else if(subtype == 'F')
					 {
					 	printf("Number of children :"); //get number of children from user
					 	scanf("%d",&noofchildren);
					 	
					 	if(noofchildren<=2)
					 	{
						 premium =5200.00;
						 printf("Total Amount :%.2f \n",premium);
						 }
						else
						{
						 premium=5200.00 + 520.00*(noofchildren-2);
						 printf("Total Amount :%.2f \n",premium);	
						}
					 }
					 else
					 {
					 	printf("Invalid type \n");
					 }
				break;
					 
			case 'N':printf("Family or Individual ( F- family and I -individual) :");		
					 scanf("%s",&subtype);
					 
					 if(subtype == 'I')
					 {
					 	premium = 3100.00;
					 	printf("Total Amount :%.2f \n",premium);
					 }
					 else if(subtype == 'F')
					 {
					 	printf("Number of children :");//get number of children from user
					 	scanf("%d",&noofchildren);
					 	
					 	if(noofchildren<=2)
					 	{
						 premium =4300.00;
						 printf("Total Amount :%.2f \n",premium);
						 }
						else
						{
						 premium=4300.00 + 430.00*(noofchildren-2);
						 printf("Total Amount :%.2f \n",premium);
						}
					 }
					 else
					 {
					 	printf("Invalid type \n");
					 }
				break;
					 
			case 'D':printf("Family or Individual ( F- family and I -individual) :");
					 scanf("%s",&subtype);
					 
					 if(subtype == 'I')
					 {
					 	premium = 3600.00;
					 	printf("Total Amount :%.2f \n",premium);
					 }
					 else if(subtype == 'F')
					 {
					 	printf("Number of children :");//get number of children from user
					 	scanf("%d",&noofchildren);
					 	
					 	if(noofchildren<=2)
					 	{
						 premium =4800.00;
						 printf("Total Amount :%.2f \n",premium);
						 }
						else
						{
						 premium=4800.00 + 480.00*(noofchildren-2);
						 printf("Total Amount :%.2f \n",premium);	
						}
					 }
					 else
					 {
					 	printf("Invalid type \n");
					 }
				break;
					 
			case 'S':printf("Family or Individual ( F- family and I -individual) :");
					 scanf("%s",&subtype);
					 
					 if(subtype == 'I')
					 {
					 	premium = 3300.00;
					 	printf("Total Amount :%.2f \n",premium);
					 }
					 else if(subtype == 'F')
					 {
					 	printf("Number of children :");//get number of children from user
					 	scanf("%d",&noofchildren);
					 	
					 	if(noofchildren<=2)
					 	{
						 premium =3800.00;
						 printf("Total Amount :%.2f \n",premium);
						 }
						else
						{
						 premium=3800.00 + 380.00*(noofchildren-2);
						 printf("Total Amount :%.2f \n",premium);	
						}
					 }
					 else
					 {
					 	printf("Invalid type \n");//print invalid type
					 }
				break;
					 	
			default :printf("Invalid Insurance Type !\n");	 //print invalid type		 		 
		}
		
		printf("DO you need to continue :");
		scanf("%s",&yesorno);
		printf("\n");
			
	}while((yesorno !='n' || yesorno !='N') && (yesorno =='y' || yesorno =='Y'));
		
		return 0;
	}
