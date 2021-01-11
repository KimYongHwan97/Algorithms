#include <stdio.h>
#include <string.h>

int main()
{
	char a[7+1];
	int count = 0;
	long long tmp = 0, b = 0;
	
	for(int i = 0; i < 3; i++)
	{
		scanf("%s",&a);
		count++;
		
		if(!strcmp(a,"black"))
		{
			if(count == 1)
			{
				b = 0 * 10;
				tmp += b;
			}
			else if ( count == 2)
			{
				b = 0;
				tmp += b;
			}
			else
			{
				tmp *= 1;
			}
		}
		else if(!strcmp(a,"brown"))
		{
			if(count == 1)
			{
				b = 1 * 10;
				tmp += b;
			}
			else if ( count == 2)
			{
				b = 1;
				tmp += b;
			}
			else
			{
				tmp *= 10;
			}
		}
		else if(!strcmp(a,"red"))
		{
			if(count == 1)
			{
				b = 2 * 10;
				tmp += b;
			}
			else if ( count == 2)
			{
				b = 2;
				tmp += b;
			}
			else
			{
				tmp *= 100;
			}
		}
		else if(!strcmp(a,"orange"))
		{
			if(count == 1)
			{
				b = 3 * 10;
				tmp += b;
			}
			else if ( count == 2)
			{
				b = 3;
				tmp += b;
			}
			else
			{
				tmp *= 1000;
			}
		}
		else if(!strcmp(a,"yellow"))
		{
			if(count == 1)
			{
				b = 4 * 10;
				tmp += b;
			}
			else if ( count == 2)
			{
				b = 4;
				tmp += b;
			}
			else
			{
				tmp *= 10000;
			}
		}
		else if(!strcmp(a,"green"))
		{
			if(count == 1)
			{
				b = 5 * 10;
				tmp += b;
			}
			else if ( count == 2)
			{
				b = 5;
				tmp += b;
			}
			else
			{
				tmp *= 100000;
			}
		}
		else if(!strcmp(a,"blue"))
		{
			if(count == 1)
			{
				b = 6 * 10;
				tmp += b;
			}
			else if ( count == 2)
			{
				b = 6;
				tmp += b;
			}
			else
			{
				tmp *= 1000000;
			}
		}
		else if(!strcmp(a,"violet"))
		{
			if(count == 1)
			{
				b = 7 * 10;
				tmp += b;
			}
			else if ( count == 2)
			{
				b = 7;
				tmp += b;
			}
			else
			{
				tmp *= 10000000;
			}
		}
		else if(!strcmp(a,"grey"))
		{
			if(count == 1)
			{
				b = 8 * 10;
				tmp += b;
				
			}
			else if ( count == 2)
			{
				b = 8;
				tmp += b;
			}
			else
			{
				tmp *= 100000000;
			}
		}
		else if(!strcmp(a,"white"))
		{
			if(count == 1)
			{
				b = 9 * 10;
				tmp += b;
			}
			else if ( count == 2)
			{
				b = 9;
				tmp += b;
			}
			else
			{
				tmp = tmp * 1000000000;
			}
		}
	}
	printf("%lld",tmp);

	
}
