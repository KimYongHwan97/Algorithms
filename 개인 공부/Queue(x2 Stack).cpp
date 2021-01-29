#include <stdio.h>
#include <string.h>
int a[1000000];
int b[1000000];

void Push(int *c, int i)
{
	int N = 0;
	scanf("%d",&N);
	
	c[i] = N;
	
	int k = 0;
	for(int j = i; j >= 0; j--)
	{
		b[k] = c[j];
		k++;
	}
}

void Pop(int *c, int i)
{
	printf("%d\n",b[i]);
	c[i] = 0;
	b[i] = 0;
}

void Top(int i)
{
	printf("%d\n",b[i]);
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
			if( i >= 0)
			Top(i);
			
			else
			printf("값이 없습니다.\n");
		}
		else if(!strcmp(p,"end"))
		{
			return 0;
		}
	}
}


