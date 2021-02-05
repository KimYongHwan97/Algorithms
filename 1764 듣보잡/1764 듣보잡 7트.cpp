#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<string> N;
	vector<string> result;
	string tmp;
	int a,b,cnt = 0;
	
	cin >> a >> b; 
	
	for(int i = 0; i < a; i++)
	{
		cin>> tmp;
		N.push_back(tmp);
	}
	
	sort(N.begin(),N.end());
	
	for(int i = 0; i < b; i++)
	{
		cin >> tmp;
		
		if(binary_search(N.begin(), N.end(), tmp))
		{
			cnt++;
			result.push_back(tmp);
		}
	}
	cout << cnt << "\n";
	
	sort(result.begin(), result.end()); 
	
	
	for(int i = 0; i < result.size(); i++)
	{
		cout << result[i] << "\n";
	}
	
}
