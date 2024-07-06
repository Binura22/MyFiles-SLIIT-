#include <stdio.h>
#include <string.h>

int main ( void )
{	
	char Number[9];
	char number[9];
	char Name[10];
	char newName[10];
	
	FILE*cfPtr;
	
	cfPtr = fopen("loyalty.dat","r");
	
	if( cfPtr == NULL )
	{
		printf("Error !");
		return -1;
	}
	
	printf("Enter number to search:");
	scanf(" %s", number);
	
	while(!feof(cfPtr))
	{
		fscanf(cfPtr,"%s %s",Number,Name);
		if(!strcmp(Number,number))
		{
			printf("Number already exists....\n");
			return -1;
		}
	}
	fclose(cfPtr);
	
	fopen("loyalty.dat","a");
	printf("Enter your name:");
	scanf("%s", newName);
	
	fprintf(cfPtr,"\n%s\t%s\n", number,newName);
	
	fclose(cfPtr);
	
	return 0;
}
