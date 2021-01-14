#include <stdio.h>

int main()
{
	int a, i = 1, tmp = 1;
	
	scanf("%d",&a);
	
	if(a == 1)
	{
		printf("1");
	}
	
	else
	{		
		for(;;)
		{
			tmp += (i*6);
			if(tmp >= a)
			{
				printf("%d",i+1);
				break;
			}
			i++; 
		}
	}
}
