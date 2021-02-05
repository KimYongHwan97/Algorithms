#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int A[10000+10],B[10000+10],C[10000+10];

void Counting_Sort(int a)
{
	int tmp = 0;
	for(int i = 1; i <= a; i++)
	{
		cin >> tmp;
		
		C[i] = tmp;
		A[tmp] += 1;
	}
	
	for(int i = 1; i <= 10000; i++)
	{
		A[i] = A[i-1] + A[i];
	}

}

int main()
{
	int a, tmp = 0;
	scanf("%d",&a);

	
	Counting_Sort(a);
	
	for(int i = 1; i <= a; i++)
	{
		B[A[C[i]]] = C[i];
		A[C[i]] -= 1;
	}
	
	for(int i = 1; i <= a; i++)
	{
		printf("%d\n",B[i]);
	}
}
