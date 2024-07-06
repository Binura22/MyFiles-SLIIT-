#include <stdio.h>
 int main(void){
 	
 	int noofch;
 	char premiuntype,yesorno;
 	char instype;
 	char subtype;
 	float total,premium;
 	
 	
 do{
 	printf("Enter Insurance type (A/N/D/S) :");
 	//scanf("%s",&instype);
 	instype = getchar();
 	
 	printf("Family or individual (F/I):");
 	//scanf("%s",&subtype);	
 	subtype = getchar();
 	
 	//select insurance type and calculation
 	if(instype =='A'){
 		
 		if(subtype == 'F'){
 			
			printf("No of children:");
 			scanf("%d",&noofch);
 				if(noofch<=2){
 					premium = 5200;}
 				else if(noofch>2){
 					premium = 5200 + 520*(noofch-2);}
 			}
 			
 		else if(subtype == 'I'){
 			premium =4500;}
			
		else{printf("invalid type\n");}
		}
 	
 	else if(instype =='N'){
 		
 		if(subtype == 'F'){
 			
 			printf("No of children:");
 			scanf("%d",&noofch);
 				if(noofch<=2){
 					premium = 4300;}
 				else if(noofch>2){
 					premium = 4300 + 430*(noofch-2);}
 			}
 			
 		else if(subtype == 'I'){
 			premium =3100;}
 		else{printf("invalid type\n");}
		}
		
	else if(instype =='D'){
 		
 		if(subtype == 'F'){
 			
 			printf("No of children:");
 			scanf("%d",&noofch);
 				if(noofch<=2){
 					premium = 4800;}
 				else if(noofch>2){
 					premium = 4800 + 480*(noofch-2);}
 			}
 			
 		else if(subtype == 'I'){
 			premium =3600;}
 		else{printf("invalid type\n");}
		}
		
	else if(instype =='S'){
 		
 		if(subtype == 'F'){
 			
 			printf("No of children:");
 			scanf("%d",&noofch);
 				if(noofch<=2){
 					premium = 3800;}
 				else if(noofch>2){
 					premium = 3800 + 380*(noofch-2);}
 			}
 			
 		else if(subtype == 'I'){
 			premium =3300;}
 		else{printf("invalid type\n");}
		}
		
	else{printf("Invalid insurance type\n");
		break;
		}		
	//display output	
	total = premium;
	printf("Your premium is :%.2f \n",premium);	
	printf("\n");
	
	//askfor continue
	printf("Do you want to continue:");
	scanf("%s",&yesorno);
}	
  while((yesorno !='n'&& yesorno !='N') || (yesorno =='y' || yesorno =='Y'));
 
return 0;}
