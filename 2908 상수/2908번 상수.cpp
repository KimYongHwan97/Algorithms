#include <stdio.h>
#include <string.h>

int main()
{
	char a[3+1],b[3+1],tmp;
	
	scanf("%s %s",&a,&b);
	
	tmp = a[0];
	a[0] = a[2];
	a[2] = tmp;
	
	tmp = b[0];
	b[0] = b[2];
	b[2] = tmp;
	
	for(int i = 0; i < 3; i++)
	{
		if((a[0] == '0' && a[1] == '0') && (b[0] == '0' && b[1] == '0'))
		{
			if(a[2] < b[2])
			{
				printf("%c",b[2]);
				break;
			}
			else if(a[2] == b[2])
			{
				return 0;
			}
			else
			{
				printf("%c",a[2]);
				break;
			}
		}
		else if(a[i] > b[i])
		{
			printf("%s",a);
			break;
		}
		else if (a[i] < b[i])
		{
			printf("%s",b);
			break;
		}
		else if (a == b)
		{
			return 0;
		}
	}
	
}
