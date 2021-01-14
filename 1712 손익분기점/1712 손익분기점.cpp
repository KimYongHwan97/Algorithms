#include <stdio.h>

int main()
{
	int a,b,c;
	int tmp, i = 0 ,tmp2 = 0;
	
	scanf("%d %d %d",&a,&b,&c);
	tmp2 = c - b;
	
	if( c < b || tmp2 == 0)
	{
		printf("-1");
	}
	else
	{
		tmp =  (a / tmp2) + 1;
		printf("%d",tmp);
	}
}
