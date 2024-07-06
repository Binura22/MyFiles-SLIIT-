#include <stdio.h>
//#include <string.h>

int main ( void )
{
	int i ,j;
	int Number[10];
	char Name[10];
	char name[10];
	int number[10];
	
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
		scanf( "%10d", &Number );
		
		printf( "Enter name   :" );
		scanf( "%s", Name );
		
		printf("\n");
		
		fprintf( cfPtr,"%d \t %s \n", Number, Name );
	}
	fclose( cfPtr );
	
	cfPtr = fopen( "loyal.dat","r" );
	
	for( j = 0 ; j < 5 ; j++ )
	{
	
		printf("Enter number to search :");
		scanf("%10d", &number);
		
		printf("\n");
		
		//fscanf(cfPtr,"%10s %10s",Number ,Name);
		
		while(!feof(cfPtr))
		{
			fscanf(cfPtr,"%d %10s",Number ,Name);
			
			if(number == Number )
			{
				printf("Number already exist ! \n");
				return -1;			
			}
							
		}
		fclose(cfPtr);
		
		cfPtr = fopen( "loyal.dat","a" );
		
		printf("Enter new name :");
		scanf("%s", name);
		
		fprintf(cfPtr,"%10d \t %s \n", number, name );
		
		fclose(cfPtr);
	}
	return 0;
}
