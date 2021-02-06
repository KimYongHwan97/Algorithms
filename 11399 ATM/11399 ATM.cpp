#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int a,tmp,sum = 0, sumall = 0;
	scanf("%d",&a);
	
	for(int i = 0; i < a; i++)
	{
		cin>>tmp;
		v.push_back(tmp);
	}
	
	sort(v.begin(),v.end());
	
	for(int i = 0; i < a; i++)
	{
		sum += v[i];
		sumall += sum;
	}
	
	cout << sumall;
	
}
