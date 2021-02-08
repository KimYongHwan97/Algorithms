#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int N;
	string tmp;
	scanf("%d",&N);
	
	vector<pair<int, int> > v(N);
	
	for(int i = 0; i < N; i++)
	{
		cin >>v[i].first >> v[i].second;
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < N; i++)
	{
		cout << v[i].first <<" "<< v[i].second << "\n";
	}
}
