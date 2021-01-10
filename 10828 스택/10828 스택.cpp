#include <stdio.h>
#include <string.h>


int a[10000];

int main()
{
	char b[6];
	int c = 0,d = 0,count = 0;
	
	scanf("%d",&c);
	
	for(int i = 0; i < c; i++)
	{
		scanf("%s",&b);
		
		if(!strcmp(b,"push"))
		{
			scanf("%d",&d);
			a[count] = d;
			count++;
		}
		
		else if(!strcmp(b,"pop"))
		{
			if(count <= 0)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",a[count-1]);
				a[count-1] = 0;
 				count--;
			}

		}
		
		else if(!strcmp(b,"size"))
		{
			printf("%d\n",count);
		}
		
		else if(!strcmp(b,"empty"))
		{
			if(count > 0)
			{
				printf("0\n");
			}
			else
			{
				printf("1\n");
			}
		}
		
		else if(!strcmp(b,"top"))
		{
			if(count <= 0)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",a[count-1]);
			}
		}
		
	}
}
