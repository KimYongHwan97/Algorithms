#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	string tmp = "";
		
	cout << "아래에 한 줄을 입력하세요. (exit 를 입력하면 종료합니다.)" << endl;
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
