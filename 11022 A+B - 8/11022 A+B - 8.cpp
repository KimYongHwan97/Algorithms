#include <stdio.h>

int main()
{
	int a,count= 0;
	
	scanf("%d",&a);
	
	int b[a*2],tmp[a];
	for(int i = 0; i < a * 2; i++)
	{
		scanf("%d",&b[i]);
	}
	
	
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < a * 2; j++ )
		{
			if(i + i == j)
			{
				printf("Case #%d: %d + %d = %d\n",i+1,b[j],b[j+1],b[j]+b[j+1]);
			}
		}
	}
}
