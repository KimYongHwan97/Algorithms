#include <iostream>

using namespace std;

class CoffeeMachine
{
	private:
		int c,w,s;
	public:
		CoffeeMachine(int n1, int n2, int n3)
		{
			c = n1;
			w = n2;
			s = n3;
		}
		void drinkEspresso()
		{
			c = c - 1;
			w = w - 1;
		}
		void drinkAmericano()
		{
			c = c - 1;
			w = w - 2;
		}
		void drinkSugarCoffee()
		{
			c = c - 1;
			w = w - 2;
			s = s - 1;
		}
		void fill()
		{
			c = 10;
			w = 10;
			s = 10;
		}
		void show()
		{
			cout << "Ŀ�� ���� ����, Ŀ�� : " << c << " ��: " << w << " ����: " << s << endl;
		}
};
int main()
{
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
	
}
