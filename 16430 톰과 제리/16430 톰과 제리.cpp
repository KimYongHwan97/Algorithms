#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d", &a, &b);
	
	if(1<= a && a<b && b <= 9)
	{
		c = b - a;
		printf ("%d %d", c, b);
	}
	else
	{
		printf("다시 입력");
	}
}
