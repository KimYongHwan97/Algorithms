#include <iostream>

using namespace std;

class MyIntStack{
		int *p;
		int size; 
		int tos;
	public:
		MyIntStack(){
		}
		MyIntStack(int size){
			this->size = size;
			p = new int[size];
			tos = 0;
		}
		MyIntStack(MyIntStack &s){
			this->p = new int[s.size];
			this->size = s.size;
			this->tos = s.tos;
			
			for(int i = 0; i < s.size; i++)
			{
				this->p[i] = s.p[i];
			}
			
		}
		~MyIntStack()
		{
			delete [] p;
		}
		
		bool push(int n)
		{
			if(tos < size)
			{
				p[tos] = n;
				tos++;
				return true;
			}
			else
				return false;
		}
		bool pop(int &n)
		{
			if(tos >= 0)
			{
				tos--;
				n = p[tos];
				return true;
			}
			else
				return false;
		}
		
};
int main()
{
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);
	
	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}
