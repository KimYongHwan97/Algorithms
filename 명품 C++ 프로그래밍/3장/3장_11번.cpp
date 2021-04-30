#include <iostream>
using namespace std;

class Box
{
	private:
		int width, height;
		char fill;
	public:
		Box(int w, int h)
		{
			setSize(w,h);
			fill = '*';
		}
		void setFill(char f)
		{
			fill = f;
		}
		void setSize(int w, int h)
		{
			width = w;
			height = h;
		}
		void draw()
		{
			for(int i = 0; i < height; i++)
			{
				for(int j = 0; j < width; j++)
				{
					cout <<fill;
				}
				cout << endl;
			}
		}
};
// 위에가 선언부 밑에가 구현부 
int main()
{
	Box b(10,2);
	b.draw();
	cout << endl;
	b.setSize(7,4);
	b.setFill('^');
	b.draw();
 } 
 
 //뭐야 시팔 이거 이미 구현되있는거잖아. 
