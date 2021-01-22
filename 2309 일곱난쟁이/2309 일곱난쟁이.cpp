#include <stdio.h>

int a[9];

int main()
{
	int sum = 0,tmp = 0,count = 0;
	
	for(int i = 0; i < 9; i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	
	sum -= 100;
	
	//오름차순 정렬용 for문 
	for(int i = 0; i < 18; i++)
	{
		for(int j = 1; j < 9; j++)
		{
			if(a[j-1] > a[j])
			{
				tmp = a[j-1];
				a[j-1] = a[j];
				a[j] = tmp;
			}
		}
	}
	
	// 100이 안되게 하는 수 찾는 for 문 + 출력 
	for(int i = 0; i < 9; i++)
	{
		for(int j = i+1; j < 9; j++)
		{
			if(a[i] + a[j] == sum && count == 0)
			{
				count++;
				for(int k = 0; k < 9; k++)
				{
					if(a[k] != a[i] && a[k] != a[j])
					{
						printf("%d\n",a[k]);
					}
				}

			 } 
		}
	}
	
	
}
