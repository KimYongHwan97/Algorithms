#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Book {
	string title;
	int price;
public:
	Book(string title, int price)
	{
		this->title = title;
		this->price = price;

	}
	void set(string title, int price)
	{
		this->title = title;
		this->price = price;
	}
	void show()
	{
		cout << title << ' ' << price << "��" << endl;
	}

	Book(const Book& b)
	{
		this->title = b.title;
		this->price = b.price;
	}
};
int main()
{
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}
