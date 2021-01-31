#include <stdio.h>

void Cal(int *arr)
{
	int count = 0;
	for(int i = 2; i <= 1000; i++)
	{
		arr[i] = i;
	}
	
	for(int i = 2; i <= 1000; i++)
	{
		for(int j = 2; j <= 1000; j++)
		{
			if(j != i && arr[j] % i == 0)
			{
				arr[j] = 0;
			}
		}
	}
	
}

int main()
{
	int arr[1020+1] = {0, };
	int a, N;
	int count = 0;
	
	Cal(arr);
	
	scanf("%d",&N);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d",&a);
		
		for(int j = 0; j <=1000; j++)
		{
			if(a == arr[j])
			{
				count++;
				break;
			}
		}
	}
	printf("%d",count);
	
}
