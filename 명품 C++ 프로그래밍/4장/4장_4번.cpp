#include <iostream>

using namespace std;

class Sample
{
	private:
		int *p;
		int size;
	public:
		Sample(int n)
		{
			size = n;
			p = new int[n];
		}
		void read()
		{
			for(int i = 0; i < size; i++)
			{
				cin >> p[i];
			}
		}
		void write()
		{
			for(int i = 0; i < size; i++)
			{
				cout << p[i] << " ";
			}
		}
		int big()
		{
			int tmp = -99999;
			for(int i = 0; i < size; i++)
			{
				if(tmp < p[i])
				{
					tmp = p[i];
				}
			}
			return tmp;
		}
		~Sample()
		{
			cout << "°´Ã¼ ¼Ò¸ê";
		}
};

int main()
{
	Sample s(10);
	s.read();
	s.write();
	cout << endl << "°¡Àå Å« ¼ö´Â " << s.big() << endl;
 }
 
 //100 4 -2 9 55 300 44 38 99 -500
