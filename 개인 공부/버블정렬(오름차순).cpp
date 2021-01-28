#include <stdio.h>

void Sort(int *a, int b)
{
	int tmp = 0;
	
	for(int i = 0; i < 10; i++)
	{
		for(int j = 1; j < 10; j++)
		{
			if(a[j] < a[j-1])
			{
				tmp = a[j];
				a[j] = a[j-1];
				a[j-1] = tmp;
			}
		}
	}

}

int main()
{
	int a[10] = {6,85,574,364,678,234,567,785,123,897};
	
	int i = 1;
	
	
	Sort(a,i);
	
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}
}
