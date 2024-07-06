#include <stdio.h>

int main(void)
{
	char shape1;
	char shape2;
	int lines;
	int i,j;
	
	printf("Enter 1st character :");
	scanf( " %c",&shape1);

	printf("Enter 2nd character :");
	scanf( " %c",&shape2);
	
	printf("Enter number of lines :");
	scanf("%d", &lines);
	
	for( i = 0; i < lines ; ++i )
	{
		for( j = 0; j < i ; ++j )
		{
			if( j % 2 == 1)
			{
				printf("%c",shape2);
			}
			else
			{
				printf("%c",shape1);
			}	
		}
		printf("\n");
	}
	
	return 0;
}
