#include <stdio.h>
#include <string.h>

int main()
{
	char a[15];
	int count = 0;
	
	scanf("%s",&a);
	
	int len = strlen(a);
	for(int i = 0; i < len; i++)
	{
		if('A' <= a[i] && a[i] <= 'C')
		{
			count += 3;
		}
		else if('D' <= a[i] && a[i] <= 'F')
		{
			count += 4;
		}
		else if('G' <= a[i] && a[i] <= 'I')
		{
			count += 5;
		}
		else if('J' <= a[i] && a[i] <= 'L')
		{
			count += 6;
		}
		else if('M' <= a[i] && a[i] <= 'O')
		{
			count += 7;
		}
		else if('P' <= a[i] && a[i] <= 'S')
		{
			count += 8;
		}
		else if('T' <= a[i] && a[i] <= 'V')
		{
			count += 9;
		}
		else if('W' <= a[i] && a[i] <= 'Z')
		{
			count += 10;
		}
	 } 
	 printf("%d",count);
}
