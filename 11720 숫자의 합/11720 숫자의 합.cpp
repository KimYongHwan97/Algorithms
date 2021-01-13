#include <stdio.h>
#include <string.h>


int main()
{
	int a = 0,sum = 0;
	
	scanf("%d",&a);
	
	char b[a+1];
	
	scanf("%s", &b);
	
	for(int i = 0; i < a; i++)
	{
		sum += (b[i] - '0');
	}
	printf("%d",sum);
	
}
