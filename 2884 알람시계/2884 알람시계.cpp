#include<stdio.h>

int main()
{
	int a = 0,b = 0;
	
	scanf("%d %d",&a,&b);
	
	if(b-45 < 0)
	{
		if ( a - 1 < 0)
		{
			if( a == 0)
			a = 23;
			else
			a = 24 - a;
		}
		else
		{
			a = a -1;
		}
		b = b+15;
	}
	else
	{
		b = b - 45;
	}
	
	printf("%d %d", a, b);
}
