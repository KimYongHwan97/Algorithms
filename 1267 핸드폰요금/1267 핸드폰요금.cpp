#include <stdio.h>

int main()
{
	int a,Y,M, tmpY = 0,tmpM = 0;
	int b[20];
	
	scanf("%d",&a);
	for(int i = 0; i < a; i++)
	{
		scanf("%d",&b[i]);
	} 
	
	for(int i = 0; i< a; i++)
	{
		Y = 10 + (10 * (b[i] / 30));
		tmpY = Y + tmpY;
	
		M = 15 + (15 * (b[i] / 60));
		tmpM = M + tmpM;
	}
	
	
	if( tmpY < tmpM )
	{
		printf("Y %d",tmpY);
	}
	if ( tmpY > tmpM)
	{
		printf("M %d",tmpM);
	}
	if ( tmpY == tmpM)
	{
		printf( "Y M %d", tmpY);
	}
	
}
