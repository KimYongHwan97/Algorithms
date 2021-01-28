#include <stdio.h>

void Sort(int *a)
{
	int tmp;
	
	for(int k = 0; k < 15; k++)
	{
		for(int i = 1; i < 10; i++)
		{
			for(int j = i-1; j >= 0; j--)
			{
				tmp = a[i];
				
				if(tmp < a[j])
				{
					a[i] = a[j];
					a[j] = tmp;
				}
			}
		}
	}
}


int main()
{
	int a[10] = {85,6,574,364,678,234,567,785,123,897};
	
	
	Sort(a);
	
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}
 } 
