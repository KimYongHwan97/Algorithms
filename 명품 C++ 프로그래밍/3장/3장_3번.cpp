#include <iostream>
#include <string>
using namespace std;

class Account
{
	private:
		string name;
		int id;
		int balance;
	public:
		Account (string s, int a, int b)
		{
			name = s;
			id = a;
			balance = b;
		}
		string getOwner()
		{
			return name;
		}
		int inquiry()
		{
			return balance;
		}
		void deposit(int a)
		{
			balance += a;
		}
		int withdraw(int a)
		{
			balance -= a;
			return balance;
		}
		
 };
int main()
{
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº" << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº" << a.inquiry() << endl;
	
}
