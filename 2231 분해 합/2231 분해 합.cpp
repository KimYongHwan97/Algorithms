#include <stdio.h>

int Cal(int a)
{
	int tmp = a,tmp2 = 0;
	int sum = a;
	
		while(tmp > 0)
		{
			tmp2 = tmp % 10;
			sum += tmp2;
			tmp = tmp / 10;
		}

	return sum;
}

int main()
{
	int N, rel = 0, sum = 0;
	
	scanf("%d",&N);
	
	for(int i = 1; i <= N; i++)
	{
		sum = Cal(i);
		
		if(sum == N)
		{
			printf("%d ",i);
			break; 
		}
		else if (i == N)
		{
			printf("0");
		}
	}
}
