#include <stdio.h>

int main()
{
	long long N,a = 5,tmp = 7;
	
	scanf("%d",&N);

	
	for(int i = 1; i < N; i++)
	{
		a += tmp;
		tmp += 3 ; 
	}
	a = a % 45678;
	
	printf("%d",a);
}
