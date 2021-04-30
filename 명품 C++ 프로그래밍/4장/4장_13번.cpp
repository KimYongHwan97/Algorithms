#include <iostream>
#include <string>

using namespace std;

class Histogram{
	private:
		string s;
	public:
		Histogram(string sentence)
		{
			s = sentence;
		}
		void put(string tmp)
		{
			s =  s + tmp;
		}
		void putc(char a)
		{
			s = s + a;
		}
		void print()
		{
			int A = 65;
			int a = 97;
			int search_Alphbet[26] = { 0, };
			
			for(int i = 0; i < s.length(); i++)
			{
				if((char)A <= s[i] && s[i] <= (char)A + 25)
				 	search_Alphbet[s[i]-'A']++;
				 	
				else if((char)a <= s[i] && s[i] <= (char)a + 25)
					search_Alphbet[s[i]-'a']++;
			}
			
			for(int i = 0; i < 26; i++)
			{
				cout << (char)(a+i)<< "(" << search_Alphbet[i] << ")  : ";
				
				for(int j = 0; j < search_Alphbet[i]; j++)
				{
					cout <<"*";
				}
				cout << endl;
			}
		}
		 
};

int main()
{
	string s = "Wise men say, only fools rush in But I can't help, \nfalling in love with you-Elvis Presley";
	int count = 0;
	int A = 65;
	int a = 97;
	
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	
	cout << s << endl;
	
	for(int i = 0; i < s.length(); i++)
	{
		if((char)A <= s[i] && s[i] <= (char)A + 25)
			count++;
		else if ((char)a <= s[i] && s[i] <= (char)a + 25)
			count++;
	}
	cout << endl << "ÃÑ ¾ËÆÄºª ¼ö : " << count << endl << endl;
	
	elvisHisto.print();
	
	
}
