#include <stdio.h>

int main()
{
	int a,tmp = 0, count = 0;
	
	scanf("%d",&a);
	
	tmp = 1000 - a;
	
	count += tmp / 500;
	tmp = tmp % 500;
	
	count += tmp / 100;
	tmp = tmp % 100;
	
	count += tmp / 50;
	tmp = tmp % 50;
	
	count += tmp / 10;
	tmp = tmp % 10;
	
	count += tmp / 5;
	tmp = tmp % 5;
	
	count += tmp;
	
	printf("%d",count); 
	
}
