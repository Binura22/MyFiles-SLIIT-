#include <stdio.h>
#include <string.h>

int main( void )
{
	char Name[10];
	char Number[9];
	char name[10];
	int i;
	
	FILE * cfPtr;
	cfPtr = fopen("Directory.dat","w");
	
	if( cfPtr == NULL )
	{
		printf("File can not open !");
		return -1;
	}
	
	for( i = 0; i < 5; ++i )
	{
		printf("Enter Name :");
		scanf("%10s", Name);
		
		printf("Enter Number :");
		scanf("%9s", Number);
		
		printf("\n");
		
		fprintf(cfPtr,"%s \t %s \n", Name,Number);
	}
	fclose(cfPtr);
	
	cfPtr = fopen("Directory.dat","r");
	
	printf("Enter name to find number :");
	scanf("%9s", name);
	
	while(!feof(cfPtr))
	{
		fscanf(cfPtr,"%10s %9s", Name, Number);
		
		if(!strcmp(name,Name))
		{
			printf("Number is :%9s", Number);
			return -1;
		}
		
	}
	printf("Error !");
	
	return 0;
}
