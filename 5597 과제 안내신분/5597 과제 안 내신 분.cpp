#include <iostream>

using namespace std;

int main()
{
	int a[31+1] = {0, };
	int tmp;
	
	for(int i = 0; i < 28; i++)
	{
		cin >> tmp;
		a[tmp] += 1;
	}
	
	for(int i = 1; i < 31; i++)
	{
		if(a[i] != 1)
		{
			cout << i << "\n";
		}
	}
}
