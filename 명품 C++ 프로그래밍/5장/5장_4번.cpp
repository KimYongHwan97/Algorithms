#include <iostream>

using namespace std;


char &find(char a[], char c, bool &sucess)
{
	for(int i = 0; i < 4; i++)
	{
		if(a[i] == c)
		{
			sucess = true;
			return a[i];
		}
	}
}

int main()
{
	char s[] = "Mike";
	bool b = false;
	char &loc = find(s,'M',b);
	
	if(b == false)
	{
		cout << "M�� ã���� ����." << endl;
		return 0;
	 } 
	 loc = 'm';
	 cout << s << endl;
}
