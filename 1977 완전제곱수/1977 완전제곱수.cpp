#include <stdio.h>

int main()
{
	int a,b,sum= 0, MIN = 999999;
	
	scanf("%d %d",&a,&b);
	
	for(int i = 0; i <= 100; i++)
	{
		if(a <= (i*i) && (i*i) <= b)
		{
			sum += i*i;
			if(MIN > i*i)
			{
				MIN = i*i;
			}
		}
	}
	if(sum != 0)
	{
		printf("%d\n%d",sum,MIN);
	}
	else
	{
		printf("-1");
	}
 } 
