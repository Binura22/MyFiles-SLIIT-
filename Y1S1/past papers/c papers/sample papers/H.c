# include <stdio.h>
float calculateIncrement(int grade, float basicSalary){
	float inc;
	
	switch(grade){
		case 1:inc=basicSalary*0.10;
			break;
		case 2:inc=basicSalary*0.15;
			break;
		case 3:inc=basicSalary*0.20;
			break;
		}
	return inc;
}	

float calcTotSalary(float salary, float increment){
	float total_salary;
	
	total_salary = salary + increment;
	
	return total_salary;
}

int main(void){
	int gra;
	float Increment,Total,sal;
	
	printf("Enter Salary:");
	scanf("%f",&sal);
	printf("Enter grade:");
	scanf("%d",&gra);
	
	Increment=calculateIncrement(gra,sal);
	printf("Increment:%.2f\n",Increment);
	
	Total=calcTotSalary(sal,Increment);
	printf("Total Salary :%.2f\n",Total);
	
	return 0 ;
}
	
