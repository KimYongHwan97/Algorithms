#include <stdio.h>

int main()
{
	int A, B, C, D, E, zcount = 0, ocount = 0;
	int N = 12;
	int a[N];
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i = 0; i < N+1; i++)
	{
		if(i%4==0 && i != 0)
		{
			if ( a[i-4] == 0)
			{
				zcount += 1;
			}
			else
			{
				ocount += 1;
			}
			
			if ( a[i-3] == 0)
			{
				zcount += 1;
			}
			else
			{
				ocount += 1;
			}
			if ( a[i-2] == 0)
			{
				zcount += 1;
			}
			else
			{
				ocount += 1;
			}
			if ( a[i-1] == 0)
			{
				zcount += 1;
			}
			else
			{
				ocount += 1;
			}
		}
		
		if(zcount == 1)
		{
			printf("A\n");
			ocount = 0;
			zcount = 0;
		}
		else if(zcount == 2)
		{
			printf("B\n");
			ocount = 0;
			zcount = 0;
		}
		else if(zcount == 3)
		{
			printf("C\n");
			ocount = 0;
			zcount = 0;
		}
		else if(zcount == 4)
		{
			printf("D\n");
			ocount = 0;
			zcount = 0;
		}
		else if (ocount == 4)
		{
			printf("E\n");
			ocount = 0;
			zcount = 0;
		}
		
	}

}
