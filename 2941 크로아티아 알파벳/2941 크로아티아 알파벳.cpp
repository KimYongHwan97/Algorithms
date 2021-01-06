#include <stdio.h>
#include <string.h>

int main()
{
	int count = 0;
	char a[100];
	
	scanf("%s",&a);
	
	int len = strlen(a);
	
	for(int i = 0; i < len; i++)
	{
		if(a[i] == 'c' && a[i+1] == '=')
		{
			i+=1;
			count++;
		}
		if(a[i] == 'c' && a[i+1] == '-')
		{
			count++;
			i+=1;
			continue;
		}
		if(a[i] == 'd' && a[i+1] == '-')
		{
			count++;
			i+=1;
			continue;
		}
		if(a[i] == 'd' && a[i+1] == 'z' && a[i+2] == '=')
		{
			count++;
			i+=2;
			continue;
		}
		if(a[i] == 'l' && a[i+1] == 'j')
		{
			count++;
			i+=1;
			continue;
		}
		if(a[i] == 'n' && a[i+1] == 'j')
		{
			count++;
			i+=1;
			continue;
		}
		if(a[i] == 'z' && a[i+1] == '=')
		{
			count++;
			i+=1;
			continue;
		}
		if(a[i] == 's' && a[i+1] == '=')
		{
			count++;
			i+=1;
			continue;
		}
		else  
		{
			if( a[i] != '=' && a[i] != '-')
			count++;
		 } 
		
	}
	printf("%d",count);
}
