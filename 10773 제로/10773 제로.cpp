#include <stdio.h>
#include <string.h>


int b[100000 + 1];

int main()
{
	int a = 0 , tmp = 0 , count = 0;
	int c = 0;
	
	scanf("%d",&a);
	
	
	for(int i = 0; i < a; i++)
	{
		scanf("%d",&c);
		
		if(c == 0)
		{
			b[count-1] = 0;
			count--; 
		}
		else if (c != 0)
		{
			b[count] = c;
			count++;
		}
	}
	
	for(int i = 0; i < count; i++)
	{
		tmp += b[i];
	}
	printf("%d",tmp);
}
