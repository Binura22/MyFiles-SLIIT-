#include <stdio.h>

int main( void )
{
	int i;
	char ID[8];
	int an1,an2,an3,an4;
	int count=0;
	
	FILE*cfPtr;
	cfPtr = fopen("answers.txt","w");
	
	if(cfPtr == NULL )
	{
		printf("Error!");
		return -1;
	}
	for( i = 0; i < 5 ; i++)
	{
		printf("Enter ID Number:");
		scanf(" %s", &ID);
		
		printf("Enter answer for 1:");
		scanf("%d", &an1);
		
		printf("Enter answer for 2:");
		scanf("%d", &an2);
		
		printf("Enter answer for 3:");
		scanf("%d", &an3);
		
		printf("Enter answer for 4:");
		scanf("%d", &an4);
		
		printf("\n");
		
		fprintf(cfPtr," %s \t %d %d %d %d \n",ID,an1,an2,an3,an4);
	}
	
	fclose(cfPtr);
	
	printf("\n");
	
	cfPtr = fopen("answers.txt","r");
	
	//fscanf(cfPtr,"%s %d %d %d %d",&ID,&an1,&an2,&an3,&an4);
	//for( i = 0; i <= 4 ; i++)
	while(!feof(cfPtr))
	{
		{
		int count=0;
		
		fscanf(cfPtr,"%s %d %d %d %d",&ID,&an1,&an2,&an3,&an4);
	
			if(an1 == 1)
			{
				++count;
			}
			if(an2 == 4)
			{
				++count;
			}
			if(an3 == 2)
			{
				++count;
			}
			if(an4 == 3)
			{
				++count;
			}
				
		}
		printf("%s %d \n",ID,count);
		//printf("%s \t %d %d %d %d \n",ID,an1,an2,an3,an4);
		
	}
	fclose(cfPtr);
	
	return 0;
}
