#include <stdio.h>

int a[10],b[42];

int main()
{	
	int count = 0;
	
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		a[i] %= 42;
	}
	
	for(int i = 0; i < 10; i++)
	{
		if(b[42 - a[i]] == 0)
		{
			b[42 - a[i]] += 1;
			count++;
		}
	}
	
	printf("%d",count);
}
