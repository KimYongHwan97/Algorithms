#include <stdio.h>

int arr[1000+1];

int Scan()
{
	int N;
	scanf("%d",&N);
	return N;
	
}

void Sort(int *brr, int b)
{
	int tmp;
	for(int i = 0; i < b; i++)
	{
		for(int j = 1; j < b; j++)
		{
			if(brr[j-1] > brr[j])
			{
				tmp = brr[j-1];
				brr[j-1] = brr[j];
				brr[j] = tmp;
			}
		}
	}
}

int main()
{
	int a;
	scanf("%d",&a);
	
	for(int i = 0; i < a; i++)
	{
		arr[i] = Scan();
	}
	
	Sort(arr,a);
	
	for(int i = 0; i < a; i++)
	{
		printf("%d\n",arr[i]);
	 } 
}
