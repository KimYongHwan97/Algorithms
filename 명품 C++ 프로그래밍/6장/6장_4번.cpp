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
	//�׽�Ʈ ���α׷� ����� ������ 
}
