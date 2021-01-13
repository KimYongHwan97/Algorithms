#include <stdio.h>
#include <string.h>

int main()
{
	int a = 0, c = 0, count = 0, tmp = 0;
	char b[20+1];
	
	scanf("%d",&a);
	
	for(int i = 0; i < a; i++)
	{
		scanf("%d",&c);
		scanf("%s",&b);
		
		int len = strlen(b);
		while(1)
		{
			if(count == c)
			{
				tmp++;
				count = 0;
			}
			if(tmp == len)
			{
				tmp = 0;
				printf("\n");
				break;
			}
			printf("%c",b[tmp]);
			count++;
			
		}
	}
}
