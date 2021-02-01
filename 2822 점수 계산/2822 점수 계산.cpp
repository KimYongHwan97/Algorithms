#include <stdio.h>

int Sort(int *arr)
{
	int MAX = -99999;
	int tmp = 0;
	int sum = 0;
	
	for(int i = 0; i < 8; i++){
		if(MAX < arr[i] ){
			MAX = arr[i];
		}
	}
	
	for(int i = 0; i < 8; i++){
		if(MAX == arr[i]){
			tmp = MAX;
			arr[i] = -1;
		}
	}
	return tmp;
}

int main(){
	
	int a[8+1] = {0,};
	int sum = 0;
	
	for(int i = 0; i < 8; i++){
		scanf("%d",&a[i]);
	}
	
	for(int i = 0; i < 5; i++){
		sum += Sort(a);
	}
	
	printf("%d\n",sum);
	
	for(int i = 0; i < 8; i++){
		if(a[i] == -1)
		printf("%d ",i+1);
	} 
	
	
}
