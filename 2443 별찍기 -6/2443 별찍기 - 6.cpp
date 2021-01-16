#include <stdio.h>

int main()
{
	int a,count = 0;
	
	scanf("%d",&a);
	
	for(int i = a; i > 0; i--)
	{
		count++;
		
		for(int j = 1; j < count; j++)
		{
			printf(" ");
		}
		for(int j = 0; j < (2*i)-1; j++)
		{
			printf("*");
		}

		printf("\n");
	}
}
