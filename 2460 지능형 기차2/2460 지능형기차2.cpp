#include <stdio.h>

int main()
{
	int a,b,MAX = 0, tmp = 0;
	
	scanf("%d %d",&a,&b);
	tmp = a + b;
	
	for(int i = 0; i < 9; i++)
	{
		scanf("%d %d",&a,&b);
		
		tmp = tmp - a;
		tmp = tmp + b;
		
		if(MAX < tmp)
		{
			MAX = tmp;
		}

	}
	printf("%d",MAX);
}
