#include <iostream>
#include <string>
using namespace std;

class Buffer{
	private:
		string text;
	public:
		Buffer(string text)
		{
			this->text = text; 
		}
		void add(string next)
		{
			text += next;
		}
		void print()
		{
			cout << text << endl;
		}
};

Buffer &append (Buffer &b, string change)
{
	b.add(change);
	return b;
}


int main()
{
	Buffer buf("Hello");
	Buffer &temp = append(buf,"Guys");
	temp.print();
	buf.print();
}
