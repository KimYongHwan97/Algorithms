#include <stdio.h>

int a[20+1];
int main()
{
	a[1] = 1;
	int b;
	
	scanf("%d",&b);
	
	for(int i = 2; i <= b; i++)
	{
		a[i] = a[i-2] + a[i-1];
	}
	
	printf("%d",a[b]);
}
