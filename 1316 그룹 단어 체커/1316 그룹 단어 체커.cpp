#include <stdio.h>
#include <string.h>

int W[26];

int main()
{
	int a,b,count=0;
	
	for(int i = 0; i < 26; i++)
	{
		W[i] = 0;
	}
	scanf("%d",&a);
	
	char N[a][100+1];
	
	for(int i = 0; i < a; i++)
	{
		scanf("%s",&N[i]);
	}
	
	for(int i = 0; i < a; i++)
	{
		int len = strlen(N[i]);
		
		for(int j = 0; j < len; j++)
		{
			if(W[N[i][j]-'a'] == 0)
			{
				W[N[i][j]-'a'] = W[N[i][j]-'a'] + 1;
				if(j+1 == len)
				{
					count++;
				}
			}
			else if(W[N[i][j]-'a'] != 0)
			{
				if(N[i][j-1] == N[i][j] )
				{
					W[N[i][j]-'a'] = W[N[i][j]-'a'] + 1;
					if(j+1 == len)
					{
						count++;
					}
				}
				else
				{
					break;
				}
			}
		}
		
		for(int j = 0; j < 26; j++)
		{
			W[j] = 0;
		}
		
	 }
	 printf("%d",count);
}
