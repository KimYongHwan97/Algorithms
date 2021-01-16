#include <stdio.h>

int a[9999999];

int main()
{
	int b,d,N,C, k = 0, count = 0;
	scanf("%d %d",&N,&C);
	
	for(int i =0; i < N; i++)
	{
		scanf("%d",&b);
		
		for(int j = 1; j <= (C/b); j++)
		{
			if(a[b*j] == 0)
			{
				a[b*j] += 1;
				count++;
			}
		}
	}
	printf("%d",count);
}
