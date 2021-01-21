#include <stdio.h>

int main()
{
	int a[8+1],count = 0,dcount = 0;
	
	for(int i = 0; i < 8; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i = 1; i < 8; i++)
	{
		if(a[i]-1 == a[i-1])
		{
			count++;
		}
		else if(a[i]+1 == a[i-1])
		{
			dcount++;
		}
		else
		{
			printf("mixed");
			break;
		}
	}
	
	if(count == 7)
	{
		printf("ascending");
	}
	else if (dcount == 7)
	{
		printf("descending");
	}
	
}
