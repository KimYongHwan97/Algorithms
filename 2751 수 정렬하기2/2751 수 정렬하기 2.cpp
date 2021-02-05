#include <stdio.h>

int main()
{
	int arr[10000+1] = {0};
	int a = 0;
	int tmp = 0;
	
	scanf("%d",&a);
	
	for(int i = 0; i < a; i++)
	{
		scanf("%d",&tmp);
		arr[tmp] += 1;
	}
	
	for(int i = 0; i < 10001; i++)
	{
		for(int j = 0; j < arr[i]; j++)
		{
			if(arr[i] != 0)
				printf("%d\n",i);
		}
	}
 } 
