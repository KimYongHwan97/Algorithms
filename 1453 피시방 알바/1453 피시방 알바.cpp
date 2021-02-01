#include <stdio.h>

int arr[150+1];
int main(){

	int N,tmp = 0,count = 0;
	
	scanf("%d",&N);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d",&tmp);
		
		if(arr[tmp] == 0)
		{
			arr[tmp] = 1;
		}
		else
		{
			count++;
		}
	}
	printf("%d",count);
}
