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
	
	//�������� ���Ŀ� for�� 
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
	
	// 100�� �ȵǰ� �ϴ� �� ã�� for �� + ��� 
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
