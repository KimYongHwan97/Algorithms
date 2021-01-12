#include <stdio.h>

int main()
{
	int a,b,c,d,tmp = 0,count = 0;
	
	scanf("%d",&a);
	
	while(1)
	{
		if(count == 0)
		{
			b = a/10;
			c = a%10;
			tmp = b + c;
			d = ( c * 10) + (tmp%10);
			count++;
			if( d == a)
			{
				printf("%d",count);
				break;
			}
		}
		else if ( count != 0)
		{
			b = d / 10;
			c = d % 10;
			tmp = b + c;
			d = (c * 10) + (tmp%10);
			count++;
			if(d == a)
			{
				printf("%d",count);
				break;
			}
			
		}
	}
}
