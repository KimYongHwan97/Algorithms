#include <iostream>

using namespace std;

int main()
{
	int H,M;
	int N;
	
	scanf("%d %d",&H,&M);
	scanf("%d",&N);
	 
	M = M + N;
	
	while(M >= 60)
	{
		M = M - 60;
		H++;
		
		if(H >= 24)
		{
			H = H - 24;
		}
		
	}
	
	printf("%d %d",H,M);
		
}
