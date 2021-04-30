#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player{
	private:
		string name;
		int index;
	public:
		void setName(string n)
		{
			name = n;
		}
		string getName()
		{
			return name;
		}
		
}; 

class GamblingGame{
	private:
		Player *p;
	public:
		GamblingGame()
		{
			p = new Player[2];
		}
		void JoinGamble(int index, string name)
		{
			p[index].setName(name);	
		}
		void StartGamble()
		{
			srand((unsigned int)time(0));
			string tmp;
			int flag = 0;
			
			while(1)
			{
				int a = rand()%4;
				int b = rand()%4;
				int c = rand()%4;
				
				cout << p[flag].getName() << " : <Enter> ";
				
				getline(cin,tmp);
				cout << "\t" << a << "\t" << b << "\t" << c;
				
					if(flag == 0)
					{
						
						if(a == b && b == c)
						{
							cout << endl << p[flag].getName() <<"님이 승리!!" << endl; 
							break;
						}		
						else
						{
							cout << "\t아쉽군요!!" << endl;
							flag = 1;
							continue;
						}
					}
				
					else
					{	
						if(a == b && b == c)
						{
							cout << endl << p[flag].getName() <<"님이 승리!!" << endl; 
							break;
						}
						else
						{
							cout << "\t아쉽군요!!" << endl;
							flag = 0;
							continue;
						}
						
					}
				
			}
			
		}
	
};

int main()
{
	GamblingGame G;
	string p_name;
	
	cout << "**** 겜블링 게임을 시작합니다 ****"<< endl;
	
	for(int i = 0 ; i < 2; i++)
	{
		cout << i+1 <<"번째 선수 이름 >> ";
		cin >> p_name;
		G.JoinGamble(i,p_name);
	}
	G.StartGamble();
	
	
	
}


//srand((unsigned int)time(NULL))

