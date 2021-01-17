#include <stdio.h>

int a[9][9];

int main()
{
	int MAX = 0,b,c;
	
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			scanf("%d",&a[i][j]);
			if(MAX < a[i][j])
			{
				MAX = a[i][j];
				b = i;
				c = j;
			}
		}
	}
	
	
	printf("%d\n%d %d\n",MAX,b+1,c+1);
}
