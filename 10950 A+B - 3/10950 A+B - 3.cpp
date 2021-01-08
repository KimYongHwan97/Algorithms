#include <stdio.h>

int main()
{
	int b;
	
	scanf("%d",&b);
	
	int a[b*2];
	
	for(int i = 0; i < b*2; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i = 0; i < b*2; i++)
	{
		printf("%d\n",a[i]+a[i+1]);
		i +=1;
	}
}
