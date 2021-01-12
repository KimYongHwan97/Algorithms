#include <stdio.h>

int main()
{
	int a[9];
	int MAX,count=0;
	
	for(int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}
	
	MAX = a[0];
	
	for(int i =0 ; i < 9; i++)
	{
		if(MAX < a[i])
		{
			MAX = a[i];
			count = i;
		}
	}
	
	printf("%d\n%d",MAX,count+1);
}
