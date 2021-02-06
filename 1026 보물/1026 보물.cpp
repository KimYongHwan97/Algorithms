#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Scan (vector<int> &v, int a)
{
	int tmp = 0;
	for(int i = 0; i < a; i++)
	{
		scanf("%d",&tmp);
		v.push_back(tmp);
	}
}

bool cmp(int a, int b)
{
	return a>b;
	
}

int main()
{
	int N = 0,tmp = 0,MAX = 0, sum = 0;
	vector<int> v1,v2;
	
	scanf("%d",&N);
	
	Scan(v1,N);
	Scan(v2,N);
	
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end(),cmp);
	
	for(int i = 0; i < N; i++)
	{
		sum += v1[i] * v2[i];
	}
	cout << sum;
}
