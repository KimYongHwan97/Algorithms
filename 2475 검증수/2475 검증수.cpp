#include <iostream>
using namespace std;

int main (void)
{
	int a,b,c,d,e,sum;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	sum = (a*a) + (b*b) + (c*c) + (d*d) + (e*e);
	sum = sum % 10; 
	printf("%d", sum); 
}
