# include <stdio.h>

float findRadianValue( float angleInDegrees )
{
	int pi=22/7.0;
	float radian;
	
	radian = (pi/180.0) * angleInDegrees;
	
	return radian;
}

void printRadianValues ( float Digree, float degree )
{
	
	printf( "%5.f %20.2f \n", degree, Digree );
	
}

int main( void )
{
	float Digree, degree=100;
	
	printf("Angle(degrees)      Angle(radians) \n");
	
 while (degree <= 200)
	{

		Digree = findRadianValue( degree );
		printRadianValues ( Digree, degree );
		
	degree = degree + 20;
	}
	return 0;
}
