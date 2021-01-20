#include <stdio.h>

int main()
{
	int a,b,c,MIN = 9999;
	
	for(int i = 0; i < 3; i++)
	{
		scanf("%d",&a);
		
		if(MIN > a)
		{
			MIN = a;
		}
	}
	scanf("%d %d",&b,&c);
	
	if( b > c)
	{
		printf("%d",(MIN + c) - 50);
	}
	else
	{
		printf("%d",(MIN + b) - 50);
	}
	
	
}
