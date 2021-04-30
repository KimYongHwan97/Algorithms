#include <iostream>

using namespace std;

class MyVector{
	private:
		int *mem;
		int size;
	public:
		MyVector();
		MyVector(int n = 100, int val = 0)
		{
			mem = new int[n];
			size = n;
			for(int i = 0; i < size; i++)
			{
				 mem[i] = val;
			}
		}
		~MyVector()
		{
			delete[] mem;
		}
};
int main()
{
	//테스트 프로그램 만들기 귀찮아 
}
