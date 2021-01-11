#include <stdio.h>
#include <string.h>

int main()
{
	char a[1000+1], b[1000+1];
	
	scanf("%s",&a);
	scanf("%s",&b);
	
	int lenA = strlen(a);
	int lenB = strlen(b);
	
	if(!strcmp(a,b) || lenA > lenB)
	{
		printf("go");
	}
	else
	{
		printf("no");
	}
	
}

