#include <stdio.h>
#include <string.h>

int d[10];

int main()
{
	int a,b,c;
	char tmp[10];
	
	scanf("%d %d %d",&a,&b,&c);
	
	sprintf(tmp, "%d",a*b*c);
	
	int len = strlen(tmp);
	
	for(int i = 0 ; i < len; i++)
	{
		d[tmp[i] - '0'] += 1;
	}
	
	for(int i = 0; i < 10; i++)
	{
		printf("%d\n",d[i]);
	}
	
}
