#include <stdio.h>
#include <string.h>
int a[1000000];

void Push(int *b, int i)
{
	int N;
	scanf("%d",&N);
	b[i] = N;
}

void Pop(int *b, int i)
{
	printf("%d\n",b[0]);
	b[0] = 0;
	
	for(int j = 0; j < i; j++)
	{
		b[j] = b[j+1];
		b[j+1] = 0;
	}
}

void Top(int *b)
{
	printf("%d\n",b[0]);
}


int main()
{
	char p[4+1];
	int i = -1;
	while(1)
	{

		scanf("%s",&p);
		
		if(!strcmp(p,"pop"))
		{
			if(i >= 0)
			{
				Pop(a,i);
				i--;
			}
			else
			printf("값이 없습니다.\n");
		}
		else if(!strcmp(p,"push"))
		{
			i++;
			Push(a,i);
		}
		else if(!strcmp(p,"top"))
		{
			if(i >= 0)
			Top(a);
			
			else
			printf("값이 없습니다.\n");
		}
		else if(!strcmp(p,"end"))
		{
			return 0;
		}
	}
}


