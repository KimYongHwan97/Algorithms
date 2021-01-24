#include <stdio.h>

int rel[20000];

int Cal(int a)
{
	int sum = a;
	
	while(1)
	{
		if(a < 10)
		{
			sum += a;
			return sum;
		}
		else if(a >= 10)
		{
			sum += a%10;
			a /= 10; 
		}
	}
	
}

int main()
{
	int tmp;
	
	for(int i = 1; i <= 12000; i++)
	{
		tmp = Cal(i);
		
		rel[tmp] += 1;
	}
	
	for(int i = 1; i <= 12000; i++)
	{
		if(rel[i] == 0)
		{
			if( i <= 10000)
			printf("%d\n",i);
		}
	}
	
}
