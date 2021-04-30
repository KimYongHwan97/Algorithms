#include <iostream>
using namespace std;

class Add
{
	private:
		int x,y;
	public:
		void setValue(int a, int b)
		{
			x = a;
			y = b;
		}
		int calculate()
		{
			return x+y;
		}
 }; 
 class Sub
{
	private:
		int x,y;
	public:
		void setValue(int a, int b)
		{
			x = a;
			y = b;
		}
		int calculate()
		{
			return x-y;
		}
 }; 
 class Mul
{
	private:
		int x,y;
	public:
		void setValue(int a, int b)
		{
			x = a;
			y = b;
		}
		int calculate()
		{
			return x*y;
		}
 }; 
 class Div
{
	private:
		int x,y;
	public:
		void setValue(int a, int b)
		{
			x = a;
			y = b;
		}
		int calculate()
		{
			return x/y;
		}
 }; 
 /////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////
 ////////////////////////////////////////////////////////////////
 int main()
 {
 	int a,b;
 	char c;
 	
 	while(1)
 	{
		cout << "두 정수와 연산자를 입력하세요>>";
 		cin >> a >> b >> c;
 	
 		if(c == '+')
 		{
 			Add tmp;
 			tmp.setValue(a,b);
 			cout << tmp.calculate() << endl;
		 }
		else if(c == '-')
 		{
 			Sub tmp;
 			tmp.setValue(a,b);
 			cout << tmp.calculate() << endl;
		 }
		else if(c == '*')
 		{
 			Mul tmp;
 			tmp.setValue(a,b);
	 		cout << tmp.calculate() << endl;
		 }
		else if (c == '/')
 		{
 			Div tmp;
 			tmp.setValue(a,b);
 			cout << tmp.calculate() << endl;
		 }
	}
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
