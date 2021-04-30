#include <iostream>

using namespace std;

class ArrayUtility2{
	public:
		static int *concat(int s1[], int s2[], int size)
		{
			int *s;
			int j = 0;
			s = new int[size];
			for(int i = 0; i < 5; i++)
			{
				s[i] = s1[i];
				s[i+5]= s2[i];
			}
			return s;
			
		}
		static int *remove(int s1[], int s2[], int size, int &retSize)
		{
			int *s;
			s = new int[size];
			int j = 0;
			
			for(int i = 0; i < 5; i++)
			{
				for(int j = 0; j = 5; j++)
				{
					if(s1[i] == s2[j])
					{
						s1[i] = -9999;
					}
				}
			}
			
			for(int i = 0; i < 5; i++)
			{
				if(s1[i] != -9999)
				{
					s[j] = s1[i];
					j++;
				}
			}
			retSize = j-1;
			return s;
		}
};

int main()
{
	 ArrayUtility2 a;
	 int x[5+1];
	 int y[5+1];
	 int tmp;
	 int retSize = 0;
	 
	 cout << "정수 5개를 입력하라. 배열 x에 삽입한다 >>>"; 
	 for(int i = 0; i < 5; i++)
	 {
	 	cin >> tmp;
		x[i] = tmp;
	 }
	 cout << endl << "정수 5개를 입력하라. 배열 y에 삽입한다 >>>";
	 
	 for(int i = 0; i < 5; i++)
	 {
	 	cin >> tmp;
		y[i] = tmp;
	 }
	 
	 cout << "합친 정수 배열을 출력한다."<<endl;
	 int *c = a.concat(x,y,10);
	 for(int i = 0; i < 10; i++)
	 {
	 	cout << c[i] << ' ';
	 }
	 
	 cout << endl;
	 int *d = a.remove(x,y,10,retSize);
	 for(int i = 0; i < 5; i++)
	 {
	 	cout << d[i] << ' ';
	 }
	  
}
