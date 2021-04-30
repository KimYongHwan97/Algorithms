#include <iostream>
#include <string>
using namespace std;

class Circle{
	private:
		int radius;
		string name;
	public:
		Circle(){};
		void setCircle(string name, int radius)
		{
			this->name = name;
			this->radius = radius;
		}
		double getArea()
		{
			return 3.14*radius*radius;
		}
		string getName()
		{
			return name;
		}
};

class CircleManager{
	private:
		Circle *p;
		int size;
	public:
		CircleManager(){};
		CircleManager(int size)
		{
			p = new Circle[size];
			this->size = size;
			string name;
			int r;
			
			for(int i = 0; i < size; i++)
			{
					cout << "�� " << i+1 << "�� ������ >> ";
					cin >> name >> r;
					p[i].setCircle(name,r);
			}

		}
		~CircleManager()
		{
			delete [] p;
		}
		void searchByName()
		{
			string name; 
			cout << "�˻��ϰ��� �ϴ� ���� �̸� >> " ;
			cin >> tmp;
			
			for(int i = 0; i < size; i++)
			{
				if(p[i].getName() == name)
				{
					cout << p[i].getName() <<"�� ������ " << p[i].getArea() << endl;
				}
			}
		}
		void searchByArea()
		{
			double area;
			cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
			cin >> area;
			cout << area <<"���� ū ���� �˻��մϴ�."<<endl;
			
			for(int i = 0; i < size; i++)
			{
				if(p[i].getArea() > area)
				{
					cout << p[i].getName() <<"�� ������ " << p[i].getArea() << ", ";
				}
			 } 
		}
		
};

int main()
{
	int a;
	cout << "���� ���� >> ";
	cin >> a; 
	CircleManager M(a);
	M.searchByName();
	M.searchByArea();
	
	
}
