#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0;
	int tmp = 0;
	
	cout << "���ڿ� �Է� >> ";
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
	
	cout << "a ���ڴ� " << count-1 << "�� �ֽ��ϴ�.";
}

//Are you happy? I am so happy.

/*string �Լ��� �Ἥ ���ڸ� �޾������� �� �Լ��� �迭ó�� ���°� ����
ex) string s = "happy" ��� �Ѵٸ�
s[0] = h
s[1] = a
�̷������� ���°� ����*/
