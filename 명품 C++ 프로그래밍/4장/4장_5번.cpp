#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <string>

using namespace std;


int main()
{
	string s;
	int tmp = 0;
	srand((unsigned)time(0));
	int n = rand();
	
	while(1)
	{
		getline(cin,s);
		
		if(s == "exit")
			break;
		else
		{
			tmp = rand() % s.length();
		
			n = rand() % s.length() + 97;
			
			s[tmp] = (char)n;
		
			cout << s << endl;
		}
	}
}

// 97~122

//Falling in love with you.
//hello world.
