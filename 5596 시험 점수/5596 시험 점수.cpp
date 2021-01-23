#include <stdio.h>

int Scan()
{
	int d;
	scanf("%d",&d);
	return d;
}

int Compare(int a, int b)
{
	if(a > b)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",b);
	}
}
int main()
{
	int a,b,c,d,suma = 0,sumb = 0;
	
	a = Scan();
	b = Scan();
	c = Scan();
	d = Scan();
	
	suma = a+b+c+d;
	
	a = Scan();
	b = Scan();
	c = Scan();
	d = Scan();
	
	sumb = a+b+c+d;
	
	Compare(suma,sumb);
	
	
}
