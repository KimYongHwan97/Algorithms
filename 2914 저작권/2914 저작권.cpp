#include <stdio.h>
using namespace std;


int main (void)
{
	int a,b,tmp; // a= ���۱� �� / b = �� ¥���� �ٹ� ����
	double avg;
	
	scanf("%d %lf",&a,&avg);
	
	tmp = a * avg; // ��հ��� �ø��ؼ� ����Ǳ� ������ �� tmp���� ���ü� �ִ� �ִ��� �ɰ���. 
	
	avg = avg - 1; // ��հ��� �ø��̱� ������ -1�� �ѵ� 0.01�� ���ذ��鼭 ����ؼ� ���� ������. 
	
	for(int i = 1; i < 101; i++) // 0.01�� 100�� ���ϸ� +1�� ��. 
	{
		b = avg * a; // �ϴ� ��հ�-1 �� ���� a�� ���� ���� b�� �Է� 
		
		if ( b <= tmp ) 
		{
			tmp = b; // �ּҺ� 
		}
		
		avg += 0.01; 
	} 
	printf ( "%d",tmp+1);
	 
}
