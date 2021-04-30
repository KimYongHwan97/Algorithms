#include <iostream>
#include <string>

using namespace std;

class Date
{
	private:
		string tmp;
		int y,d,m;
	public:
		Date(int y, int m, int d)
		{
			this->y = y;
			this->m = m;
			this->d = d;
		}
		Date(string s)
		{
			y = stoi(s.substr(0,4));
			m = stoi(s.substr(5,1));
			d = stoi(s.substr(7,2));
		}
		
		void show()
		{
			cout << y << "³â"<< m << "¿ù" << d <<"ÀÏ" << endl; 
		}
		int getYear()
		{
			return y;
		}
		int getMonth()
		{
			return m;
		}
		int getDay()
		{
			return d;
		}
		
 };
 
int main()
{
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
