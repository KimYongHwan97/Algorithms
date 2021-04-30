#include <iostream>
#include <string>
using namespace std;

class Person
{
	private:
		string name;
	public:
		Person()
		{}
		Person(string name)
		{
			this->name = name;
		}
		string getName()
		{
			return name;
		}
		void setName(string name)
		{
			this->name = name;
		}
		
};

class Family
{
	private:
		Person *p;
		int size;
		string name;
	public:
		Family(string name, int size)
		{
			p = new Person[size];
			this->size = size;
			this->name = name; 
		}
		void setName(int index, string tmp)
		{
			p[index].setName(tmp);
		}
		void show()
		{
			cout << name << "가족은 다음과 같이 " << size << "명 입니다.\n";
    		for(int i=0; i<size; i++)
			{
       			cout << p[i].getName() << "\t";
  		  	}
		}
		~Family()
		{
			delete[] p;
		}
};


int main()
{
	Family *simpson = new Family("Simpson",3);
	simpson->setName(0,"Mr. Simpson");
	simpson->setName(1,"Mrs. Simpson");
	simpson->setName(2,"Bart Simpson");
	simpson->show();
	delete simpson; 
}
/*기본생성자 안만들어가지고 한 1시간은 대가리 싸맴.
생성자는 항상 확인을 잘 하자..*/
