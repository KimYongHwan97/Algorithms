#include <stdio.h>

int main()
{
	int a,tmp=0;
	
	scanf("%d",&a);
	for(int i = 1; i <= a; i++)
	{
		tmp = tmp + i; 
	}
	
	printf("%d",tmp );
}
