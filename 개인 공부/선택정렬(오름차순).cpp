#include <stdio.h>

void Search(int *a , int count)
{
	int MIN = 99999999;
	int tmp = 0;
	for(int i = count; i < 10; i++)
	{
		if(MIN > a[i])
		{
			MIN = a[i];
		}
	}
	
	for(int i = 0; i < 10; i++)
	{
		if(MIN == a[i])
		{
			tmp = a[count];
			a[count] = a[i];
			a[i] = tmp;
		}
	}
}


int main()
{
	int count = 0;
	int a[10] = {6,85,574,364,678,234,567,785,123,897};
	
	for(int i = 0; i < 10; i++)
	{
		Search(a,count);
		count++;
	}
	
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}
	
}
