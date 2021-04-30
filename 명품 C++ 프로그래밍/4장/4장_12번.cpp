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
					cout << "원 " << i+1 << "과 반지름 >> ";
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
			cout << "검색하고자 하는 원의 이름 >> " ;
			cin >> tmp;
			
			for(int i = 0; i < size; i++)
			{
				if(p[i].getName() == name)
				{
					cout << p[i].getName() <<"의 면적은 " << p[i].getArea() << endl;
				}
			}
		}
		void searchByArea()
		{
			double area;
			cout << "최소 면적을 정수로 입력하세요 >> ";
			cin >> area;
			cout << area <<"보다 큰 원을 검색합니다."<<endl;
			
			for(int i = 0; i < size; i++)
			{
				if(p[i].getArea() > area)
				{
					cout << p[i].getName() <<"의 면적은 " << p[i].getArea() << ", ";
				}
			 } 
		}
		
};

int main()
{
	int a;
	cout << "원의 갯수 >> ";
	cin >> a; 
	CircleManager M(a);
	M.searchByName();
	M.searchByArea();
	
	
}
