#include <stdio.h>

int main()
{
	int a,sum,tmp = 0,tmpa = 0, tmp5 = 0,tmp3 = 0;
	
	scanf("%d",&a);
	
	if ( a % 5 == 0)
	{
		tmp5 = a / 5;
	}
	
	else if ( a % 3 == 0)
	{
		tmp3 = a / 3;
	}
	else if ( a < 5 || a == 7) 
	{
		tmp = -1;
	}
	
	for(int i = 0; i < 1000+1; i++)
	{
		if(5 * i < a || (a-(5*i)) % 3 == 0)
		{
			for(int j = 0; j < 100; j++)
			{
				if( a == (5*i)+(3*j))
				{
					tmpa = i+j;
					if(tmp == 0)
					{
						tmp = tmpa;
					}
					else if (tmp > tmpa)
					{
						tmp = tmpa;
					}
				}
			}
		}
		else
		{
			break;
		}
	}
	
	
	if(tmp == -1)
	{
		if(tmp5 != 0)
		{
			printf("%d",tmp5);
		}
		else if (tmp3 != 0)
		{
			printf("%d",tmp3);
		}
		else
		{
			printf("%d",tmp);
		}
	}
	else
	{
		printf("%d",tmp);
	}
}
