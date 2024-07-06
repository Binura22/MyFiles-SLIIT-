#include <stdio.h>
#include <string.h>

int main ( void )
{
	int i ,j;
	char Number[10];
	char Name[10];
	char name[10];
	char number[10];
	
	FILE * cfPtr;
	cfPtr = fopen( "loyal.dat","w" );
	
	if( cfPtr == NULL )
	{
		printf("File can not open !");
		return -1;
	}
	
	for( i = 0; i < 2 ; ++i)
	{
		printf( "Enter number :" );
		scanf( "%s", Number );
		
		printf( "Enter name   :" );
		scanf( "%s", Name );
		
		printf("\n");
		
		fprintf( cfPtr,"%s \t %s \n", Number, Name );
	}
	fclose( cfPtr );
	
	cfPtr = fopen( "loyal.dat","r" );
	
	for( j = 0 ; j < 5 ; j++ )
	{
	
		printf("Enter number to search :");
		scanf("%s", number);
		
		printf("\n");
		
		//fscanf(cfPtr,"%10s %10s",Number ,Name);
		
		while(!feof(cfPtr))
		{
			fscanf(cfPtr,"%10s %10s",Number ,Name);
			
			if(!strcmp(number,Number) )
			{
				printf("Number already exist ! \n");
				return -1;			
			}
							
		}
		fclose(cfPtr);
		
		cfPtr = fopen( "loyal.dat","a" );
		
		printf("Enter new name :");
		scanf("%s", name);
		
		fprintf(cfPtr,"%s \t %s \n", number, name );
		
		fclose(cfPtr);
	}
	return 0;
}
