#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	double result = 0;
	int *p = new int[5];
	cout << "정수 5개 입력 >> ";
	
	for(int i = 0; i < 5; i++)
	{
		cin >> p[i];
	}
	
	for(int i = 0; i < 5; i++)
	{
		sum += p[i];
	}
	
	result = (double)sum / 5;
	
	cout << "평균 : "<< result;
	
 } 
