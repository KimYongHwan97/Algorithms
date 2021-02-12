#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int tmp1,tmp2;
	int N;
	vector<pair<int,int> > v;

	scanf("%d",&N);
	
	for(int i = 0; i < N; i++)
	{
		cin >> tmp1 >> tmp2;
		v.push_back({tmp1, tmp2});
	}
	
	vector<int> g(v.size(),1);
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(i == j)
			continue;
			
			if(v[i].first > v[j].first)
			{
				if(v[i].second > v[j].second)
				{
					g[j]++;
				}
			}
		}
	}
	
	for(int i = 0; i < N; i++)
	{
		cout << g[i] << " ";
	}
}
