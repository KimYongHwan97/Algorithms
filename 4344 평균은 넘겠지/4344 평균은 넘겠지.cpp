#include <stdio.h>

int main()
{
	double a = 0, b = 0, count = 0;
	double sum = 0;
	double avg = 0;
	
	scanf("%lf",&a);
	scanf("%lf",&b);
	
	double tmp[1000] , rel[1000];
	
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < b; j++)
		{
			scanf("%lf",&tmp[j]);
			sum = sum + tmp[j];
		}
		printf("%lf\n",sum);
		avg = sum / b;
		
		for(int j = 0; j < b; j++)
		{
			if(avg < tmp[j])
			{
				count++;
			}
		}
		for(int j = 0; j < b; j++)
		{
			rel[j] = count / b * 100;
		}
		
		for(int j = 0; j < b; j++)
		{
			tmp[j] = 0;
		}
		sum = 0;
		count = 0;
		avg = 0;
	}
	
	for(int i = 0; i < a; i++)
	{
		printf("%.3lf / ",rel[i]);
	}
}
