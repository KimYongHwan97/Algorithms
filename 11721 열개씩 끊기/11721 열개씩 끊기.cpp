#include <stdio.h>
#include <string.h>

int main()
{
	int count = 0;
	char c [100 + 1];
	
	scanf("%s",&c);
	count = strlen(c);
	
	for(int i = 0; i < count ; i++)
	{
		if(i % 10 == 0 && i != 0)
		{
			printf("\n");
		}
		printf("%c",c[i]);
		
	}
}
