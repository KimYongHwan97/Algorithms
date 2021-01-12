#include <stdio.h>
#include <string.h>

int main()
{
	int b,count = 1,tmp = 0;
	char a[80];
	
	scanf("%d",&b);
	
	int sum[b];
	
	for(int i = 0; i < b; i++)
	{
		scanf("%s",a);
		int len = strlen(a);
		
		for(int j = 0; j < len; j++)
		{
			if(a[j] == 'O')
			{
				tmp += count;
				count ++;
				
			}
			if(a[j] == 'X')
			{
				count = 1;
			}
		}
		
		sum[i] = tmp;
		tmp = 0;
		count = 1;
	}
	for(int i = 0; i < b; i++)
	{
		printf("%d\n",sum[i]);
	}
}
