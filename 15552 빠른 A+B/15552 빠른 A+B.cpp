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

/*해당 문제는 8393번 합과 코드가 똑같음. 그 이유는 
https://www.acmicpc.net/problem/15552 에 있음.*/
