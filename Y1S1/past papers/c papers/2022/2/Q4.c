#include <stdio.h>

int main ( void )
{
	int i, j;
	char IDNumber[10];
	int answers[4];
	int answer2, answer3, answer4, answer1;
	int count;
	
	FILE * cfPtr;
	cfPtr = fopen("answers.dat","w");
	
	if( cfPtr == NULL )
	{
		printf("File can not open !");
		return -1;
	}
	
	for( i = 0; i < 5; ++i )
	{
		printf("Enter ID number :");
		scanf("%s", IDNumber);
		
		fprintf(cfPtr,"%s \t",IDNumber);
		
		for( j = 0; j < 4; ++j )
		{
			printf("Enter answer %d:", j+1);
			scanf("%d", &answers[j]);
			
			fprintf(cfPtr,"%d ",answers[j]);
		}
		fprintf(cfPtr,"\n");		
	}
	fclose(cfPtr);
	
	printf("\n");
	
	printf("ID number Correct answers \n");
	cfPtr = fopen("answers.dat","r");
	
	while(!feof(cfPtr))
	{
		count = 0;
		
		fscanf(cfPtr,"%s %1d %1d %1d %1d",IDNumber, &answer1, &answer2, &answer3, &answer4 );
		
		if( answer1 == 1 )
		{
			count = count + 1;
		}
		if(answer2 == 4)
		{
			count = count + 1;
		}
		if(answer3 == 2)
		{
			count = count + 1;
		}
		if(answer4 == 3)
		{
			count = count + 1;
		}
		
		printf("%s   -   %d \n", IDNumber,count);
	}
	fclose(cfPtr);
	
	return 0;
}
