#include <iostream>
#include <string>
using namespace std;

class Integer
{
	private:
		int a;
	public:
		Integer(int n)
		{
			a = n;
		 } 
		Integer(string s)
		{
			a = stoi(s);
		}
		int get()
		{
			return a;
		}
		void set(int n)
		{
			a = n;
		}
		bool isEven()
		{
			if(a % 2 == 0)
				return true;
			else
				return false;
		}
};

int main()
{
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';
	
	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven() << ' ';
 } 
