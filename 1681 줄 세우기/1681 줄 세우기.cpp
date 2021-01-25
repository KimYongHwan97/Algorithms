#include <stdio.h>

int Cal(int a,int b)
{
	int original = a;
	int tmp= 0;
	
	while(1)
	{
		if(a%10 == b)
		{
			return -1;
		}
		else if(a < 10)
		{
			if( a != b)
			{
				return original;
			}
			else
			{
				return -1;
			}
		}
		else
		{
			a = a/10;
		 } 
	}
}


int main()
{
	int N,L;
	int i = 1; 
	int count = 0;
	int tmp = 0;
	int MAX = -99999;
	
	scanf("%d %d",&N,&L);
	
	for(;;)
	{
		tmp = Cal(i,L);
		
		if(MAX < tmp)
		{
			if(tmp != -1)
			{
				count++;
			}
			MAX = tmp;
			if(count == N)
			{
				break;
			}
		}
		i++;

	}
	printf("%d",MAX);
}
