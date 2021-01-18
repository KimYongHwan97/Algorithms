#include <stdio.h>
#include <string.h>

int rel[3];
int main()
{
	int count = 1, r = 0;
	char a[8+1];
	int MAX = -1;
			
	for(int i = 0; i < 3; i++)
	{
		scanf("%s",&a);
		
		int len = strlen(a);
		for(int j = 1; j <= len; j++)
		{
			if(a[j-1] == a[j])
			{
				count += 1;
			}
			else if(MAX < count)
			{
				MAX = count;
				count = 1;
			}
			else
			{
				count = 1;
			}
		}
		rel[r] = MAX;
		r++;
		MAX = -1;
		count = 1;
	}
	
	for(int i = 0; i < 3; i++)
	{
		printf("%d\n",rel[i]);
	}
}
