#include <iostream>
#include <string>
using namespace std;

class Book{
		string title;
		int price, pages;
	public:
		operator += (int n);
		operator -= (int n);
		Book(string title = "", int price = 0, int pages= 0)
		{
			this->title = title;
			this->price = price;
			this->pages = pages; 
		}
		void show()
		{
			cout << title << ' ' << price << "�� " << pages << "������" << endl; 
		}
		string getTitle()
		{
			return title;
		}
	/*	operator += ( int n)
		{
			price = price + n;
		}
		operator -= (int n)
		{
			price = price - n;
		}*/
}; 

		Book::operator += (int n)
		{
			price = price + n;
		}
		Book::operator -= (int n)
		{
			price = price - n;
		}

int main()
{
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show(); 
}
