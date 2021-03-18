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
	/*ù��° for������ �ϴ� ���� ��� ���Դ��� �����
	�ι�° for������ ���� ���� ���°� ������� tmp�� ���
	����° for������ �Ȱ��� 2�� �����ų� ������ ������ tmp�� ���� ���� ����
	���ڸ� v1�� �־�� �� ��� flag�� ���������ν� ���� �������� ���� �ְ� ���ٸ�
	�׳� ���� ���� ���¾ָ� ����ϰԲ� ��. 
	�׹�° for������ v1�� ����� ������ �ٽ� ������·� ����
	���� �� ���� flag�� �ʱⰪ�� �����ʴٸ�( ���� Ƚ���� �ݺ��ؼ� ���� ���ڰ� �����Ұ��)
	�ι�°�� ���� ���� ����ϰ� �ƴϸ� ó���� ���*/
	
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
