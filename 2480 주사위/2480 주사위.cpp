#include<stdio.h>


int main()
{
	int a[3],tmp,tmp2,O = 0,result;
	
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	
	if(a[0] == a[1] && a[1] == a[2])
	{
		tmp = 10000;
		tmp2 = a[0] * 1000;
		result = tmp + tmp2;
	}
	
	else if( a[0] == a[1] || a[1] == a[2])
	{
		tmp = 1000;
		tmp2 = a[1] * 100;
		result = tmp + tmp2; 
	}
	else if (a[0] == a[2])
	{
		tmp = 1000;
		tmp2 = a[0] * 100;
		result = tmp + tmp2;
	}
	
	else if ( a[0] != a[1] && a[1] != a[2] && a[0] != a[2])
	{
		for(int i = 0; i < 3; i++)
		{
			if ( O < a[0] )
			{
				O = a[0];
			}
			if( O < a[1])
			{
				O = a[1];
			}
			if ( O < a[2])
			{
				O = a[2];
			}
		}
		result = O * 100;
	}
	
	printf("%d",result);
}
