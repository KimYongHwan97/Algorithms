#include <stdio.h>
#include <string.h>

int count[3000];
char a[50][50+1];

int main()
{
	int N;
	
	scanf("%d",&N);
	
	
	for(int i = 0; i < N; i++)
	{
		scanf("%s",&a[i]);
	}
	
	int len = strlen(a[0]);
	
	for(int i = 1; i < N; i++)
	{
		for(int j = 0; j < len; j++)
		{
			if(a[0][j] == a[i][j])
			{
				count[j] += 1;
			}
		}
	}
	
	for(int i = 0; i < len; i++)
	{
		if(count[i] == N-1)
		{
			printf("%c",a[0][i]);
		}
		else
		{
			printf("?");
		}
	}
}
