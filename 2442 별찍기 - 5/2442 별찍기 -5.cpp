#include <stdio.h>

int main()
{
	int a,count = 0;
	
	scanf("%d",&a);
	
	for(int i = a; i > 0; i--)
	{	
		for(int j = 1; j < i; j++)
		{
			printf(" ");
		}
		count++;
		for(int k = 0; k < (count*2)-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}	

