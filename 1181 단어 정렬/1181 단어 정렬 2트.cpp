#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool com (string a, string b)
{
	if(a.size() == b.size())
	{
		return a < b;
	}
	else 
	{
		return a.size() < b.size();
	}
}

int main()
{
	int N;
	string s,tmp;
	
	scanf("%d",&N);
	
	vector <string> v;
	
	for(int i = 0; i < N; i++)
	{
		cin >> s;
		v.push_back(s);
	}
	
	sort(v.begin(),v.end(),com);
	
	for(int i = 0; i < N; i++)
	{
		if(tmp != v[i])
		{
			cout << v[i] << "\n";
			tmp = v[i];
		}
	}
}
