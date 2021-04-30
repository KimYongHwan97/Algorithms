#include <iostream>

using namespace std;

bool bigger(int a, int b, int &big)
{
	if(a >= b)
		big = a;
	else
		big = b;
		
	if(a == b)
		return true;
	else
		return false;
}

int main()
{
	int a,b;
	int big = 0;
	cin >> a >> b;
	
	bigger(a,b,big);
	
	cout << bigger(a,b,big) << endl;
	cout << big; 
}
