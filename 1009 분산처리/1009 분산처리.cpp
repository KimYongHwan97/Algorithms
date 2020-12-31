#include <stdio.h>

int main()
{
	int T;
	int a,b,A;
	
		scanf("%d",&T);
	
	for(int i = 0; i < T; i++)
	{
		A = 0;
		scanf("%d %d",&a,&b);
		
		A = a % 10;
		
		
		if ( (A == 2) || (A == 3) || (A == 7) || (A == 8))
		{
			b %= 4;
			if (b == 0)
			{
				b = 4;
			}
			
			for (int j = 1; j < b; j ++)
			{
				A = A * a;
				A %= 10;
			}
		}
		
		else if ( A == 4 || A == 9)
		{
			b %= 2;
			if ( b == 0)
			{
				b = 2;
			}
			
			for ( int j = 1; j < b; j++)
			{
				A = A * a;
				A %= 10;
			}
		}
		
		if( A == 1)
		{
			printf("1\n");
		}
		if ( A == 5)
		{
			printf("5\n");
		}
		if ( A == 6)
		{
			printf("6\n");
		}
		
		if( A == 2 )
		{
			printf("2\n");
		}
		if ( A == 3)
		{
			printf("3\n");
		}
		if ( A == 7)
		{
			printf("7\n");
		}
		if ( A == 8)
		{
			printf("8\n");
		}
		if ( A == 9)
		{
			printf("9\n");
		}
		if ( A == 4)
		{
			printf("4\n");
		}
		if ( A == 0 )
		{
			printf("10\n");
		}
		
	}

}
