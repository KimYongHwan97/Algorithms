#include<stdio.h>

int main()
{
	int a,b,c,tmp;
	
	scanf("%d %d %d",&a,&b,&c);
	
	tmp = (a / (c - b)) + 1;
	
	if(tmp > 0)
	{
		printf("%d",tmp);
	}
	else
	{
		printf("-1");
	}
	
}
