#include <iostream>
using namespace std;

class Color{
	int red,green,blue;
	public:
		Color()
		{
			red = green = blue = 0;
		}
		Color(int r, int g, int b)
		{
			red = r;
			green = g;
			blue = b; 
		}
		void setColor(int r, int g, int b)
		{
			red = r;
			green = g;
			blue = b;
		}
		void show()
		{
			cout << red << ' ' << green << ' ' << blue << endl;
		}
};

int main()
{
	Color screenColor(255,0,0);
	Color *p;
	p = &screenColor; 
	p->show(); // 포인터 사용해서 클래스 멤버함수를 부를때는 -> 임을 꼭 기억하자. 
	Color colors[3];
	p = colors;
	
	p[0].setColor(255,0,0);
	p[1].setColor(0,255,0);
	p[2].setColor(0,0,255);
	
	for(int i = 0; i < 3; i++)
	{
		p[i].show();
	}
	
}
