#include <stdio.h>
#include <string.h>

int main(){
	int a,count = 0;
	
	scanf("%d",&a);
	
	char b[a][50+a];
	
	for(int i = 0; i < a; i++)
	{
		scanf("%s",b[i]); 
	}
	
	for(int i = 0; i < a; i++)
	{
		int len = strlen(b[i]);
		int cnt = 0;
		for(int j = 0; j < len; j++)
		{
			for(int k = j+1; k < len; k++)
			{
				if((b[i][j] == '(') && (b[i][k] == ')'))
				{
					b[i][j] = '0';
					b[i][k] = '0';
				}
			}
			/*
			if((b[i][j] == '(')
			{
				cnt ++;
			}
			else if((b[i][j] == ')')
			{
				cnt --;
			}
			
			if ((j+1 == len))
			{
				if(cnt == 0)
					printf("YES\n");
				
				else if (cnt > 0 )
					printf("NO\n");
				
				break;
			}
			else if(cnt < 0)
			{
				printf("NO\n");
				break;
			}*/
			
		}
		
		
		for(int j = 0; j < len; j++)
		{
			if(b[i][j] != '0')
			{
				count = 1;
				break;
			}
			else if (b[i][j] == '0')
			{
				count = 0;
			}
		}
			
		if(count == 1)
		{
			printf("NO\n");
		}
		else if (count == 0)
		{
			printf("YES\n");
		}
	}
}
