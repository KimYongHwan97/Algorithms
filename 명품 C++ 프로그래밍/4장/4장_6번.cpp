#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	string tmp = "";
		
	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit �� �Է��ϸ� �����մϴ�.)" << endl;
	while(1)
	{
		getline(cin,s);
		
		if(s == "exit")
			break;
		else
		{
			reverse(s.begin(),s.end());
			cout << s << endl;
		}
	}
	
}
