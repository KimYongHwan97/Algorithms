#include <stdio.h>


float b[1000 + 1];

int main()
{
	float a,MAX,sum,rel;
	
	scanf("%f",&a);
	
	for(int i = 0; i < a; i++)
	{
		scanf("%f",&b[i]);
	}
	MAX = b[0];
	
	for(int i = 0; i < a; i++)
	{
		if(MAX < b[i])
		{
			MAX = b[i];
		}
		sum += b[i];
	}
	
	rel = (((sum / MAX) *100)/a);
	printf("%f",rel);
}
