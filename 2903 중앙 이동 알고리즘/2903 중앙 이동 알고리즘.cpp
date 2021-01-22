#include <stdio.h>

int main()
{
	int a,b;
	
	b = 2;
	
	scanf("%d",&a);
	
	for(int i = 0; i < a; i++)
	{
		b = b + (b-1);
	}
	
	printf("%d",b*b);
}
