#include <iostream>

using namespace std;

class Container{
	private:
		int size;
	public:
		Container()
		{
			size = 10;
		}
		void fill()
		{
			size = 10;
		}
		void consume()
		{
			size = size -1;
		}
		int getSize()
		{
			return size;
		}
};

class CoffeVendingMachine{
	private:
		Container tong[3];
		void fill()
		{
			for(int i = 0; i < 3; i++)
			{
				tong[i].fill();
			 } 
			 //0 - Ŀ�� / 1 - �� / 2 - ���� 
			 show();
		}
		void selectEspresso()
		{
			tong[0].consume();
			tong[1].consume();
			
			if(tong[0].getSize() < 0 || tong[1].getSize() < 0 || tong[2].getSize() < 0)
				cout << "���ᰡ �����մϴ�." << endl;
			else
				cout << "���������� �弼��" << endl;
			
		}
		void selectAmericano()
		{
			tong[0].consume();
			tong[1].consume();
			tong[1].consume();
			
			if(tong[0].getSize() < 0 || tong[1].getSize() < 0 || tong[2].getSize() < 0)
				cout << "���ᰡ �����մϴ�." << endl;
			else
				cout << "�Ƹ޸�ī�� �弼��" << endl;
		}
		void selectSugarCoffee()
		{
			tong[0].consume();
			tong[1].consume();
			tong[1].consume();
			tong[2].consume();
			
			if(tong[0].getSize() < 0 || tong[1].getSize() < 0 || tong[2].getSize() < 0)
				cout << "���ᰡ �����մϴ�." << endl;
			else
				cout << "����Ŀ�� �弼��" << endl;
		}
		void show()
		{
			cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() <<
			 ", ���� " << tong[2].getSize() << endl;
		}
		public:
		void run()
		{
			char c;
			cout << "**** Ŀ�����Ǳ⸦ �۵��մϴ�. ****" << endl;
			
			while(1)
			{
				cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5: ä���) >>";
				cin >> c;
				
				if(c == '1')
					selectEspresso();
				else if(c == '2')
					selectAmericano();
				else if(c == '3')
					selectSugarCoffee();
				else if(c == '4')
					show();
				else if(c == '5')
					fill();
				else
				{
					cout << "�ٽ� �Է����ּ���" << endl;
					run();
				}
			}
		}
};

int main()
{
	CoffeVendingMachine C;
	C.run();
}
