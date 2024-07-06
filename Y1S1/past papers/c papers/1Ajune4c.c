#include <stdio.h>

int main ( void )
{
	int i;
	char empNo[3];
	char empno[3];
	char name[10];
	int att[7];
	
	FILE * cfPtr;
	cfPtr = fopen("attendance.txt","r");
	if(cfPtr == NULL)
	{
		printf("Error !");
		return -1;
	}
	
	//printf("Enter employee Number:");
	//scanf("%s", &empNo);
	
	fscanf(cfPtr,"%s \n %s \n %d \n",&empno,&name,&att);
	//if(empNo == empno)
	//{
		while(!feof(cfPtr))
		{
			fscanf(cfPtr,"%s \n %s \n %d \n",&empno,&name,&att);
			printf("%s  %s  %d ",empno,name,att);
			//if(empNo == empno)
			//{	
				//printf("Total attendence :%s",empno);	
			//}	
		}
	//}
	fclose(cfPtr);
	
	return 0;
}
