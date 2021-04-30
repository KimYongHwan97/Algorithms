#include <iostream>

using namespace std;

class Matrix{
	private:
		int arr[5];
	public:
		Matrix(){
		}
		Matrix(int a, int b, int c, int d)
		{
			arr[0] = a; arr[1] = b; arr[2] = c; arr[3] = d;
		}
		show()
		{
			cout << "Matrix = { " << arr[0] << ' ' << arr[1] << ' ' << arr[2] << ' ' << arr[3] << " }" << endl;
		}
		friend Matrix operator +(Matrix m1, Matrix m2);
		friend Matrix& operator+=(Matrix& op1, Matrix op2);
		friend bool operator ==(Matrix m1, Matrix m2);
};

Matrix operator +(Matrix m1, Matrix m2)
{
	Matrix tmp;
	for(int i = 0; i < 4; i++)
	{
		tmp.arr[i] = m1.arr[i] + m2.arr[i];
	}
	return tmp;
}

Matrix& operator+=(Matrix& op1, Matrix op2)
{
	for(int i = 0; i < 4; i++)
	{
		op1.arr[i] += op2.arr[i];
	}
	return op1;
}
bool operator ==(Matrix m1, Matrix m2)
{
	for(int i = 0; i < 4; i++)
	{
		if(m1.arr[i] != m2.arr[i])
			return false;
	}
	return true;
}

int main()
{
	Matrix a(1,2,3,4), b(2,3,4,5), c;
	
	c = a + b;
	
	a += b;
	
	a.show();
	b.show();
	c.show();
	
	if(a==c)
		cout << "a and c are the same" << endl;
}
