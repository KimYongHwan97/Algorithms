#include <iostream>

using namespace std;

class Circle{
	int radius;
	public:
		Circle()
		{
			radius = 1;
		}
		Circle(int a)
		{
			radius = a;
		}
		void setRadius(int radius)
		{
			this->radius = radius;
		}
		double getArea()
		{
			return 3.14 * radius * radius;
		}
};
int main()
{
	Circle circle[3];
	int tmp;
	double result = 0;
	int count = 0;
	
	for(int i = 0; i < 3; i++)
	{
		cout << "�� " << i+1  << "�� ������ >>";
		cin >> tmp;
		circle[i].setRadius(tmp);
		
		result = circle[i].getArea();
		if(result > 100)
			count++;
	}
	cout << "������ 100���� ū ���� " << count <<"�� �Դϴ�."<<endl; 
}
