#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	double result = 0;
	int *p = new int[5];
	cout << "���� 5�� �Է� >> ";
	
	for(int i = 0; i < 5; i++)
	{
		cin >> p[i];
	}
	
	for(int i = 0; i < 5; i++)
	{
		sum += p[i];
	}
	
	result = (double)sum / 5;
	
	cout << "��� : "<< result;
	
 } 
