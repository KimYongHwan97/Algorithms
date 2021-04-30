#include <iostream>

using namespace std;

class Circle{
	private:
		int radius;
	public:
		Circle(){
			radius = 1;	
		}
		Circle(int r){
			radius = r;
		}
		double getArea()
		{
			return radius * radius * 3.14;
		}
		void show()
		{
			cout << radius << endl;
		}
	
};

void swap(Circle &p1 , Circle &p2)
{
	Circle tmp;
	tmp = p1;
	p1 = p2;
	p2 = tmp;
}

int main()
{
	Circle c1,c2(30);
	
	swap(c1,c2);
	
	c1.show();
	c2.show();
}
