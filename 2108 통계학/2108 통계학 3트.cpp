#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double a(vector<int> &v, int n)
{
	int tmp = 0;
	double tmp2 = 0;

	for (int i = 0; i < n; i++)
	{
		tmp += v[i];
	}

	tmp2 = (double)tmp / (double)n;
	
	return tmp2;
}

int b(vector<int> &v, int n)
{
	int a[8000+2] = { 0, };
	vector<int> v1;
	int tmp = 0;
	int most = 1;
	int flag = 0;
	
	for(int i = 0; i < v.size(); i++)
	{
		a[v[i]+4000]++; 
	}
	
	for(int i = 0; i <= 8001; i++)
	{
		 if(tmp < a[i])
		 {
		 	tmp = a[i];
		 }
	}
	
	for(int i = 0; i <= 8001; i++)
	{
		if(tmp == a[i])
		{
			flag++;
			v1.push_back(i);
		}
	}
	
	for(int i = 0; i < v1.size(); i++)
	{
		v1[i] = v1[i] - 4000;
	}
	
	sort(v1.begin(),v1.end());
	
	if(flag != 1)
	{
		return v1[1];
	}
	else
	{
		return v1[0];
	}
	/*첫번째 for문에서 일단 숫자 몇번 나왔는지 계산함
	두번째 for문에서 가장 자주 나온게 몇번인지 tmp에 기억
	세번째 for문에서 똑같이 2번 나오거나 했을수 있으니 tmp와 같은 값을 가진
	숫자를 v1에 넣어둠 이 경우 flag를 세워둠으로써 만약 같은값을 가진 애가 없다면
	그냥 가장 많이 나온애를 출력하게끔 함. 
	네번째 for문에서 v1에 저장된 값들을 다시 정상상태로 돌림
	정렬 후 만약 flag가 초기값과 같지않다면( 같은 횟수로 반복해서 나온 숫자가 존재할경우)
	두번째로 작은 값을 출력하고 아니면 처음꺼 출력*/
	
}

int c(vector<int> &v, int n)
{
	return v[v.size() - 1] - v[0];
}

int main()
{
	int tmp;
	vector<int> v1;
	int N = 0;
	double Sum = 0;
		int Center = 0, Most = 0, Average = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		v1.push_back(tmp);
	}
	sort(v1.begin(), v1.end());

	Sum = a(v1,N);
	Center = v1[v1.size() / 2];
	Most = b(v1, N);
	Average = c(v1, N);

	printf("%.lf\n", Sum);
	cout << Center << "\n" << Most << "\n" << Average << "\n";

}
