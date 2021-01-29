#include <stdio.h>
#include <string.h>
int a[1000000];

void Push_front(int *b, int i)
{
	int N,k = 0;
	scanf("%d",&N);
	for(int j = i; j >= 0; j--)
	{
		b[j+1] = b[j];
	}
	b[0] = N;
	
}

void Push_back(int *b, int i)
{
	int N;
	scanf("%d",&N);
	
	b[i] = N;
	
}

void Pop_back(int *b, int i)
{
	printf("%d\n",b[i]);
	b[i] = 0;
}

void Pop_front(int *b, int i)
{
	printf("%d\n",b[0]);
	for(int j = 0; j <= i; j++)
	{
		b[j] = b[j+1];
		b[j+1] = 0;
	}
	b[i] = 0;
}

void Top_front(int *b)
{
	printf("%d\n",b[0]);

}

void Top_back(int *b, int i)
{
	printf("%d\n",b[i]);
}


int main()
{
	char p[20+1];
	int i = -1;
	while(1)
	{

		scanf("%s",&p);
		
		if(!strcmp(p,"pop_front"))
		{
			if(i >= 0)
			{
				Pop_front(a,i);
				i--;
			}
			else
			printf("값이 없습니다.\n");
		}
		
		else if (!strcmp(p,"pop_back"))
		{
			if( i>= 0)
			{
				Pop_back(a,i);
				i--;
			}
			else
			printf("값이 없습니다.\n");
		}
		
		else if(!strcmp(p,"push_front"))
		{
			i++;
			Push_front(a,i);
		}
		
		else if(!strcmp(p,"push_back"))
		{
			i++;
			Push_back(a,i);
		}
		
		else if(!strcmp(p,"top_front"))
		{
			if(i >= 0)
			Top_front(a);
			
			else
			printf("값이 없습니다.\n");
		}
		
		else if(!strcmp(p,"top_back"))
		{
			if(i >= 0)
			Top_back(a,i);
			
			else
			printf("값이 없습니다.\n");
		}
		
		else if(!strcmp(p,"end"))
		{
			return 0;
		}
	}
}




