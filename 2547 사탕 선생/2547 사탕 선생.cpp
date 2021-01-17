#include <stdio.h>

int rel[100000];

int main()
{
	int T,a, k = 0;
	long long c,sum = 0,tmp = 0;
	
	scanf("%d",&T);
	
	for(int i = 0; i < T; i++)  
	{
		scanf("%d",&a);
	
		for(int j = 0; j < a; j++) 
		{
			scanf("%lld",&c); 
			tmp = c % a;
			sum += tmp; 
		}
		if(sum % a == 0)
		{
			sum = 0; 
			rel[k] += 1;
			k++;
		}
		else
		{
			sum = 0;
			rel[k] += 2;
			k++;
		}
		
	}
	
	for(int i = 0; i < T; i++)
	{
		if(rel[i] == 1) 
		{
			printf("YES\n");
		}
		else if (rel[i] == 2) 
		{
			printf("NO\n");
		}
	}

}

