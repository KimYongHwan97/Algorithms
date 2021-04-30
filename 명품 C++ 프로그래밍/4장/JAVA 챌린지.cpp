#include <iostream>
#include <string>
using namespace std;

class Client
{
	private:
		string name;
		int seat_number;
	public:
		Client()
		{
			name = "---";
		}
		void setName(string n)
		{
			name = n;
		}
		void setSeat (int n)
		{
			seat_number = n;
		}
		string getName()
		{
			return name;
		}
			
};

class Seat
{
	private:
		Client *p;
		int number;
	public:
		Seat()
		{
			p = new Client[10];
			
			for(int i = 0; i < 10; i++)
			{
				p[i].setName("---");
				p[i].setSeat(i);
			}
		}
		void show()
		{
			for(int i = 0; i < 10; i++)
			{
				cout << p[i].getName() << " ";
			}
			cout << endl;
		}
		void Reservation()
		{
			string n;
			int tmp = 0;
			
			cout << "�̸� >> ";
			cin >> n;
			cout << "��ȣ >> ";
			cin >> tmp;
			
			p[tmp-1].setName(n);
		}
		bool Cancel(string name)
		{
			string tmp = name;

			for(int i = 0; i < 10; i++)
			{
				if(tmp == p[i].getName())
				{
					p[i].setName("---");
					return true;
				}
				else if( tmp != p[i].getName() && i == 9)
				{
					return false;
				}
			}
		}
		
		
};

int main()
{
	Seat S,A,B;
	cout << "��ǰ �ܼ�ƮȦ ���� �ý����Դϴ�."<<endl;
	
	int Select = 0;
	int Seat_search = 0;
	string Cancel_name = "";
	
	while(1)
	{
		cout << "���� : 1 / ��ȸ : 2 / ��� : 3 / ������ : 4 >> ";
		cin >> Select;
		
		if(Select == 1)
		{ 
			cout << "�¼� ���� S(1) , A(2), B(3) >> ";
			
			while(1)
			{
				cin >> Seat_search;
			 
				if (Seat_search == 1)
				{
					cout << "S >>";
					S.show();
					S.Reservation();
					break;
				}
				else if (Seat_search == 2)
				{
					cout << "A >>";
					A.show();
					A.Reservation();
					break;
				}
				else if (Seat_search == 3)
				{
					cout << "B >>";
					B.show();
					B.Reservation();
					break;
				}
				else
				{
					cout << "�¼��� �ٽ� �Է����ּ��� >> ";
					break;
				}
			}
		}
		
		else if (Select == 2)
		{
			S.show();
			cout << endl;
			A.show();
			cout << endl;
			B.show();
			cout << endl;
			cout << " <<< ��ȸ�� �Ϸ��Ͽ����ϴ� >>> " << endl;
		}
		
		else if (Select == 3)
		{
			cout << "�¼� S:1, A:2, B:3 >> ";
			cin >> Seat_search;
			if(Seat_search == 1)
			{	
				S.show();
				cout << "�̸� >> ";
				while(1)
				{
					cin >> Cancel_name;
					if(S.Cancel(Cancel_name) == false)
					{
						cout << "�߸��� �̸��Դϴ�. �ٽ� �Է����ּ��� >>";
					}
					else
						break;
				}
				
			}
			else if(Seat_search == 2)
			{
				A.show();
				cout << "�̸� >> ";
				while(1)
				{
					cin >> Cancel_name;
					if(A.Cancel(Cancel_name) == false)
					{
						cout << "�߸��� �̸��Դϴ�. �ٽ� �Է����ּ��� >>";
					}
					else
						break;
				}
			}
			else if(Seat_search == 3)
			{
				B.show();
				cout << "�̸� >> ";
				while(1)
				{
					cin >> Cancel_name;
					if(B.Cancel(Cancel_name) == false)
					{
						cout << "�߸��� �̸��Դϴ�. �ٽ� �Է����ּ��� >>";
					}
					else
						break;
				}
			}
			
		}
		else if (Select == 4)
			break;
		
		else
			cout << "�߸��� �����Դϴ�." << endl;
		
	}
}
