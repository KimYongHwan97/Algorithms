#include <stdio.h>

int a[9+1];
int main()
{
	int N;
	int tmp = 0;
	int MAX= -10;
	int len = 0;
	scanf("%d",&N);
	
	while(N>0)
	{
		a[len] = N%10;
		N = N/10;
		len++;
	}
	
	for(int i = 0; i < len; i++)
	{
		for(int j = 1; j < len; j++)
		{
			if(a[j-1] < a[j])
			{
				tmp = a[j-1];
				a[j-1] = a[j];
				a[j] = tmp;
			}
		}
	}
	
	for(int i =0; i < len; i++)
	{
		printf("%d",a[i]);
	}
}
