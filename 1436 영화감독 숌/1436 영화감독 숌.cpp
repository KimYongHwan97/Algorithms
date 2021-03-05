#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	int count = 0;
	int tmp = 665;
	string str;
	
	
	scanf("%d",&n);
	
	while(1)
	{
		tmp++;
		
		str = to_string(tmp);
		
		if(str.find("666") != -1)
		{
			count++;
		}
		
		if(count == n)
		{
			cout << tmp << "\n";
			break;
		}
	}
}
