#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

class EvenRandom
{
	public:
		EvenRandom()
		{
			srand((unsigned)time(0));
		}
		int next()
		{
			int tmp = rand();
			if(tmp % 2 == 0)
				return tmp;
			else
				return tmp-1;
		}
		int nextImage(int a, int b)
		{
			int tmp = rand()%(b-a+1)+a;
			if(tmp %2 == 0)
				return tmp;
			else
				return tmp-1;
		}
};
int main()
{
	EvenRandom r;
	cout << "-- 0에서" << RAND_MAX << "까지의 랜덤 정수 10개-- " << endl;
	for(int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	 } 
	 
	 cout << endl << endl << "-- 2에서 "<< "4 까지의 랜덤 정수 10 개" << endl;
	 for(int i = 0; i < 10; i++)
	 {
	 	int n = r.nextImage(2,10);
	 	cout << n << ' ';
	 }
	 cout << endl;
}

