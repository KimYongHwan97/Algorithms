#include <stdio.h>

int a[4];

int main()
{
	int tmp = 0;
	
	for(int i = 0; i < 3; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			if(a[j] > a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	
	printf("%d",a[1]);
	
}
