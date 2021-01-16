#include <stdio.h>

int main()
{
	int a,b,ret = 0, tmp = 0, tmp2 = 0;
	
	while(scanf("%d %d",&a,&b) != EOF)
	{
		ret = a + (a/b);
		tmp = (a/b) + (a%b);
			
		while(1)
		{
			if(tmp >= b)
			{
				tmp2 = tmp / b;
				tmp = (tmp/b) + (tmp%b); 
				ret += tmp2;
			}	
			else
			{
				break;
			}
		}
		printf("%d\n",ret);
	
	}
}
