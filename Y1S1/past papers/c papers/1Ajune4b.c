#include <stdio.h>

int main( void )
{
	int i,j;
	char empNo[3];
	char name[10];
	int attendence[7];
	
	FILE * cfPtr;
	cfPtr = fopen("attendance.txt","w");
	if(cfPtr == NULL)
	{
		printf("Error !");
		return -1;
	}
	
	for ( i = 0; i < 2; ++i )
	{
		printf("Enter Employee Number:");
		scanf(" %s", &empNo);
		
		printf("Enter Name:");
		scanf(" %s", &name);
		
		fprintf(cfPtr,"%s \t%s\t",empNo,name);
			
		for ( j = 0; j < 7; ++j )
		{
			printf("Attendance %d:",j+1);
			scanf(" %d", &attendence[i]);
			
			fprintf(cfPtr,"%d ",attendence[i]);
		}
		fprintf(cfPtr,"\n");
		printf("\n");
		
	}	
	fclose(cfPtr);
	return 0;
}
