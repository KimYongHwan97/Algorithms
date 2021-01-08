#include <stdio.h>

int main()
{
	int a,b;
	
	scanf("%d %d",&a,&b);
	
	int X[a];
	
	for(int i = 0; i < a; i++)
	{
		scanf("%d", &X[i]);
	 } 
	 
	for(int i = 0; i < a; i++)
	{
		if( X[i] < b)
		{
			printf("%d ",X[i]);
		}
	}
}
