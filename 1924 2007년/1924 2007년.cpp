#include <stdio.h>

int main()
{
	int x = 1,y = 1;
	
	scanf("%d %d",&x,&y);
	
	if(x == 1)
	{
		y %= 7;
	}
	else
	{
		for(int i = 1; i < x; i++)
		{
			if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			{
				y += 31;
			}
			else if (i == 4 || i == 6 || i == 9 || i == 11)
			{
				y += 30;
			}
			else
			{				
				y += 28;
			}
		}
	}
	y %= 7;
	
	if(y == 1)
	{
		printf("MON");
	}
	else if(y == 2)
	{
		printf("TUE");
	}
	
	else if(y == 3)
	{
		printf("WED");
	}
	
	else if(y == 4)
	{
		printf("THU");
	}
	
	else if(y == 5)
	{
		printf("FRI");
	}
	
	else if(y == 6)
	{
		printf("SAT");
	}
	
	else if (y == 0)
	{
		printf("SUN");
	}
}
