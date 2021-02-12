#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N,M;
	int tmp1,tmp2;
	int count = 0;
	
	scanf("%d %d",&N,&M);
	
	vector<int> v(N+10);
	
	for(int i = 1; i <= M; i++)
	{
		cin >> tmp1 >> tmp2;
		
		while(tmp1 <= N)
		{
			if(v[tmp1] == 0)
				v[tmp1] += 1;
			
			tmp1 = tmp1 + tmp2;
		}
		
	}
	
	for(int i = 1; i <= N; i++)
	{
		if(v[i] == 0)
		{
			count++;
		}
	}
	cout << count;
}
