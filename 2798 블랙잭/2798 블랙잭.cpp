#include <stdio.h>

int c[100];
int main()
{
	int a,b,Max = -9999999,sum = 0;
	
	scanf("%d %d",&a,&b);
	
	for(int i = 0; i < a; i++)
	{
		scanf("%d",&c[i]);
	}
	
	for(int i = 0; i < a; i++)
	{
		for(int j = i+1; j < a; j++)
		{
			for(int k = j+1; k < a; k++)
			{
				sum = c[i] + c[j] + c[k]; 
				if( sum <= b)
				{
					if(sum > Max)
					{
						Max = sum;
					}
				}
			}
		}
	}
	
	printf("%d",Max);
 } 
