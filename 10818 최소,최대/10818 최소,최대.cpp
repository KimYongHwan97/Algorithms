#include <stdio.h>

int main()
{
	int b = 0, MIN = 0, MAX = 0;
	
	scanf("%d", &b);
	
	int a[b];
	
	for(int i = 0; i < b; i++)
	{
		scanf("%d",&a[i]);
	}
	
	MIN = a[0];
	MAX = a[0];
	
	for(int i = 0; i < b; i++)
	{
		if( MIN < a[i])
		{
			continue;
		}
		else
		{
			MIN = a[i];
		}
	 } 
	 
	for(int i = 0; i < b; i++)
	{
		if( MAX < a[i])
		{
			MAX = a[i];
		}
		else
		{
			continue;
		}
	}
	 printf("%d %d",MIN,MAX);
}

