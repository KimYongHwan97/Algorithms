#include <stdio.h>

int main()
{
	int a,b,c;
	int sum = 0;
	int flag = 1;
	int count = 0;
	
	scanf("%d %d %d",&a,&b,&c);
	
	int tmp = a - b;
	
	count = (c-a)/tmp;
	
	if((c-a)%tmp == 0)
	count++;
	
	else if ((c-a)%tmp != 0)
	count += 2;
	
	printf("%d",count);
	
	
/*	while(1)
	{
		if(flag == 1)
		{
			count++;
			sum += a;
			flag = 0;
			
			if(sum >= c)
			{
				printf("%d",count);
				break;
			}
		}
		else if (flag == 0)
		{
			sum -= b;
			flag = 1;
		}
	}*/
}
