#include <stdio.h>
	struct no{
		int num;
		float local,inter,roaming;
	}no1;
int main(){
	int count=0;
	float total;
while(count<=5){
	
	printf("Enter phone number:");
	scanf("%d",&no1.num);
	printf("Enter lo charges:");
	scanf("%f",&no1.local);
	printf("Enter int charges:");
	scanf("%f",&no1.inter);
	printf("Enter roaming charges:");
	scanf("%f",&no1.roaming);
	
	total = no1.inter +no1.local + no1.roaming;
	printf("%d\n",no1.num);
	printf("Total due amount:%.2f \n",total);
	printf("\n");
	++count;}
	
return 0;	
}
