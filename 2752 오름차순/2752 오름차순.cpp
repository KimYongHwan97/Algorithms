#include <stdio.h>

int main()
{
	int a,b,c,tmp;
	
	scanf("%d %d %d",&a,&b,&c);

		for(;;)
		{
			if(b<a)
			{
				tmp = a;
				a = b;
				b = tmp;
			}
		
			if ( c < b)
			{
				tmp = b;
				b = c;
				c = tmp;
			}
			else if( a < b < c)
			{
				break;
			}
		
		}
		
	printf("%d %d %d",a,b,c);
}
