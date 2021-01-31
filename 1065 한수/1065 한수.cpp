#include <stdio.h>

int N[4+1];

int Cal(int b)
{
	int tmp = 0, j = 0, k = 0, num = -9; //num = 브루트포스 사용할때 쓸 변수 
	
	if(10 <= b && b < 100)
	{
		j = 1; // 이거는 자릿수 분리용 
		k = 1; // 이게 한수 계산용 
	}
	else if(100 <= b && b < 1000)
	{
		j = 2;
		k = 2;
	}
	else
	{
		return 1;
	}
	
	while(1)
	{
		if(j >= 0)
		{
			N[j] = b % 10;
			b = b / 10;
			j--; 
		}
		else
		{
			break;
		}
	}
	
	while(1)
	{
		if( k == 1)
		{
			if(N[k-1] + num == N[k])
			{
				tmp++;
				return tmp;
			}
			else if (num < 9)
			{
				num++;
			}
			else
			{
				return 0;
			}
		} 
		
		else if ( k == 2)
		{
			if(N[k-2] + num == N[k-1] && N[k-1] + num == N[k])
			{
				tmp++;
				return tmp;
			}
			
			else if (num < 9)
			{
				num++;
			}
			
			else
			{
				return 0;
			}
		}
	}

}

int main()
{
	int a,count = 0;
	
	scanf("%d",&a);
	
	for(int i = 1; i <= a; i++)
	{
		if(i == 1000)
		break;
		
		else
		count += Cal(i);
	}
	printf("%d",count);
	
}
