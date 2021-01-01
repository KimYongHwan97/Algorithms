#include <stdio.h>

int main()
{
	int a,b,c,tmp;
	
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d",&tmp);
	
	c = c + tmp;
	
	if(c >= 60)
	{
		b = b + (c / 60);
		c = c % 60;
	}
	
	if ( b >= 60)
	{
		a = a + ( b / 60);
		b = b % 60;
	}
	
	if ( a >= 24)
	{
		a = a % 24;
	}
	
	printf("%d %d %d", a, b, c);
	 
}
