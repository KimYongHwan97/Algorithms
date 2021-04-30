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
	int n = 0;
	int tmp;
	double result = 0;
	int count = 0;
	
	cout << "���� ���� >> ";
	cin >> n;
	
	Circle *p = new Circle[n];
	 
	for(int i = 0; i < n; i++)
	{
		cout << "�� " << i+1  << "�� ������ >>";
		cin >> tmp;
		p[i].setRadius(tmp);
		
		result = p[i].getArea();
		if(result > 100)
			count++;
	}
	cout << "������ 100���� ū ���� " << count <<"�� �Դϴ�."<<endl; 
	delete[] p; 
}
