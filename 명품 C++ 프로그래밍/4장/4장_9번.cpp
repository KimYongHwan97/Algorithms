#include <iostream>
#include <string>
using namespace std;

class Person{
	private:
		string name;
		string tel;
	public:
		Person()
		{
			name ="";
			tel = "";
		}
		string getName()
		{
			return name;
		}
		string getTel()
		{
			return tel;
		}
		void set(string n, string t)
		{
			name = n;
			tel = t;
		}
};

int main()
{
	Person person[3];
	string tmp_n, tmp_t;
	string search;
	
	cout << "�̸��� ��ȭ��ȣ�� �Է����ּ���" << endl;
	
	for(int i = 0; i < 3; i++)
	{
		cout << "��� " << i+1 << " >> " ;
		cin >> tmp_n >> tmp_t;
		
		person[i].set(tmp_n, tmp_t);
		
	 } 
	 
	 cout << "��� ����� �̸��� " ;
	 for(int i = 0; i < 3; i++)
	 {
	 	cout << person[i].getName() << " "; 
	 }
	 
	 cout << endl << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ��� >>";
	 cin >> search;
	 
	 for(int i = 0; i < 3; i++)
	 {
	 	if(person[i].getName() == search)
	 	{
	 		cout << "��ȭ��ȣ�� " << person[i].getTel() << endl;
		 }
		 else
		 {
		 	continue;
		 }
	 }
}
