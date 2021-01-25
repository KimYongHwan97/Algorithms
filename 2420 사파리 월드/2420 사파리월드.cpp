#include <stdio.h>

int main()
{
	long long a,b,tmp = 0;
	
	scanf("%lld %lld",&a,&b);
	
	tmp = a - b;
	
	if(tmp < 0)
	{
		tmp *= -1;
	}
	
	printf("%lld",tmp);
}
