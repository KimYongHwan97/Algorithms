#include <stdio.h>
#include <string.h>

int a[26];
	
int main()
{
	int tmp = 0;
	char N[5000 + 1];
	
	for(;gets(N);){
		
      int len = strlen(N);
         
      for(int i = 0; i < len; i++)
      {
         if(N[i] != ' ')
         {
            a[N[i]-'a'] = a[N[i]-'a'] + 1;
         }
      }
  }


		for(int i = 0; i < 26; i++)
		{
			if(tmp < a[i])
			{
				tmp = a[i];
			}
		}
		
		for(int i = 0; i <26; i++)
		{
			if(a[i] == tmp)
			{
				 printf("%c",i+'a');
			}
		}

}
