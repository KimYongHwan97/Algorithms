#include <iostream>
using namespace std;

class Oval
{
	private:
		int width, height;
	public:
		Oval()
		{
			width = 1;
			height = 1;
		}
		Oval(int a, int b)
		{
			width = a;
			height = b;
		}
		~Oval()
		{
			cout << "Oval 소멸 : 너비 : " << width << " 높이 : " << height << endl;
		}
		int getWidth()
		{
			return width;
		 } 
		
		int getHeight()
		{
			return height;
		}
		
		void set(int a, int b)
		{
			width = a;
			height = b;
		}
		void show()
		{
			cout << "width : " << width << " height : " << height << endl;
		}
};

int main()
{
	Oval a,b(3,4);
	a.set(10,20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}
