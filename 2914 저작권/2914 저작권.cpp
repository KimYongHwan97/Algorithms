#include <stdio.h>
using namespace std;


int main (void)
{
	int a,b,tmp; // a= 저작권 곡 / b = 내 짜집기 앨범 갯수
	double avg;
	
	scanf("%d %lf",&a,&avg);
	
	tmp = a * avg; // 평균값이 올림해서 저장되기 때문에 이 tmp값은 나올수 있는 최댓값이 될것임. 
	
	avg = avg - 1; // 평균값이 올림이기 때문에 -1을 한뒤 0.01을 더해가면서 계속해서 수를 곱해줌. 
	
	for(int i = 1; i < 101; i++) // 0.01씩 100번 더하면 +1이 됨. 
	{
		b = avg * a; // 일단 평균값-1 한 다음 a와 곱한 값을 b에 입력 
		
		if ( b <= tmp ) 
		{
			tmp = b; // 최소비교 
		}
		
		avg += 0.01; 
	} 
	printf ( "%d",tmp+1);
	 
}
