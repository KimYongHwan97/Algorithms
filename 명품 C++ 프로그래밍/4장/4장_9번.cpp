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
	
	cout << "이름과 전화번호를 입력해주세요" << endl;
	
	for(int i = 0; i < 3; i++)
	{
		cout << "사람 " << i+1 << " >> " ;
		cin >> tmp_n >> tmp_t;
		
		person[i].set(tmp_n, tmp_t);
		
	 } 
	 
	 cout << "모든 사람의 이름은 " ;
	 for(int i = 0; i < 3; i++)
	 {
	 	cout << person[i].getName() << " "; 
	 }
	 
	 cout << endl << "전화번호를 검색합니다. 이름을 입력하세요 >>";
	 cin >> search;
	 
	 for(int i = 0; i < 3; i++)
	 {
	 	if(person[i].getName() == search)
	 	{
	 		cout << "전화번호는 " << person[i].getTel() << endl;
		 }
		 else
		 {
		 	continue;
		 }
	 }
}
