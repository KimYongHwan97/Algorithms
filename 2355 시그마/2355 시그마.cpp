#include <stdio.h>

int main()
{
	long long a,b,count = 1,tmp = 0;
	
	scanf("%lld %lld",&a,&b);
	
	if (a < b)
	{
		for(int i = a; i < b; i++)
		{
			count++;
		}
		
		if ( count % 2 == 1)
		{
			printf("%lld",(a+b)*(count/2) + (a+(count/2)));
		}
		else if ( count % 2 == 0)
		{
			printf("%lld",(a+b)*(count/2));
		}
	}
	else
	{
		for(int i = b; i < a; i++)
		{
			count++;
		}
		
		if ( count % 2 == 1)
		{
			printf("%lld",(a+b)*(count/2) + (b+(count/2)));
		}
		else if ( count % 2 == 0)
		{
			printf("%lld",(a+b)*(count/2));
		}
	}
}
