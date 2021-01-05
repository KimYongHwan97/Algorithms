#include<stdio.h>
#include<string.h>

int main()
{
	int a = 0,tmp=0;
	
	scanf("%d",&a);
	
	char T[a*4];
	
	for(int i = 0; i < a*4; i++)
	{
		scanf("%c",&T[i]);
	}
	
	for(int i = 0; i < a*4; i++)
	{
		if(T[i] == ',')
		{
			printf("%d\n",(T[i-1]-48) + (T[i+1]-48));
		}
	}
	
	
	
	
	
}


//'1' == 49
