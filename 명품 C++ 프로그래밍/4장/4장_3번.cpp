#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0;
	int tmp = 0;
	
	cout << "문자열 입력 >> ";
	getline(cin,s);
	
	/*for(int i = 0; i < s.length(); i++)
	{
		if(s[i] == 'a')
		{
			count++;
		}
	}
	cout << count;*/
	
	
	while(1)
	{
		if(s.find('a',tmp) != -1)
		{
			tmp = s.find('a',tmp+1);
			count++;
		}
		else
		break;
		 
	}
	
	cout << "a 문자는 " << count-1 << "개 있습니다.";
}

//Are you happy? I am so happy.

/*string 함수를 써서 문자를 받앗을때는 그 함수를 배열처럼 쓰는게 가능
ex) string s = "happy" 라고 한다면
s[0] = h
s[1] = a
이런식으로 쓰는게 가능*/
