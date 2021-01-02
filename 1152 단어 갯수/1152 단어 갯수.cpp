#include <stdio.h>

int main()
{
	int N = 1000000,count = 0;
	int i = 0;
	
	char a[N];
	
	for(;;)
	{
		scanf("%c",&a[i]);
		
		if(a[i] == ' ' && i == 0)
		{
			i++;
			continue;
		}
		else if(a[i] == ' ' && a[i-1] != ' ')
		{
			count++;
		}
		
		if(a[i] == '\n')
		{
			if(a[i-1] == ' ')
			{
				count = count - 1;
			}
			break;
		}
		
		i++;
		
	}
	
	printf("%d",count+1);
	
}
