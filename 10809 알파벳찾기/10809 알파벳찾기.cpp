#include <stdio.h>
#include <string.h>

int main()
{
	int a[26],count;
	char N [100 + 1];
	
	for(int i = 0; i < 26; i++)
	{
		a[i] = -1;
	}

	scanf("%s",&N);
	count = strlen(N);
	
	for(int i = 0; i < count; i++)
	{
		if(a[N[i]-'a'] == -1)
		{
			a[N[i]-'a'] = i;
		}
	}
	
	for(int i = 0; i < 26; i++)
	{
		printf("%d ",a[i]);
	}
	
}
