#include <stdio.h>


int main()
{
	int cup[3] = {1,0,0};
	int M,a,b;
	
	scanf("%d", &M);
	
	for(int i = 0; i < M; i++)
	{
		scanf("%d %d",&a,&b);
		a--;
		b--; 
		
		if(0<=a && a <= 2 && 0 <= b && b <= 2)
		{
			if(cup[a] != cup[b])
			{
				if(cup[a] == 1)
				{
					cup[b] = 1;
					cup[a] = 0;
				}
				else if (cup[b] == 1)
				{
					cup[a] = 1;
					cup[b] = 0;
				}
			}
			else 
			{
				continue;
			}
		}
		else
		{
			printf("-1");
			break;
		}
	}
	
	for(int i = 0; i < 3; i++)
	{
		if(cup[i] == 1)
		{
			printf("%d",i+1);
		}
	}
	
}
