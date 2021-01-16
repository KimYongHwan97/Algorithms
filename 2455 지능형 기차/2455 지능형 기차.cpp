#include <stdio.h>

int main()
{
	int a,b,first = 0,tmp = 0,MAX = 0;
	
	for(int i = 0; i < 4; i++)
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
