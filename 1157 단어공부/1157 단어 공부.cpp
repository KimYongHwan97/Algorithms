 #include <stdio.h>
 #include <string.h>
 
 int a[26];
 
 int main()
 {
 	int count,tmp=0,count2=0;
 	char N[1000000 +1];
 	
 	scanf("%s",&N);
 	count = strlen(N);
 	
	for(int i = 0; i < count; i++)
 	{
 		if( 97<= N[i] && N[i] <= 122 )
 		{
 			N[i] = N[i]-32;
		 }
		 
		 a[N[i]-'A'] = a[N[i]-'A'] + 1;
	}
	
	for(int i = 0; i < 26; i++)
	{
		if(tmp < a[i])
		{
			tmp = a[i];
		}
	}
	
	
	for(int i = 0; i < 26; i++)
	{
		if(tmp == a[i])
		{
			count2++;
		}
	}
	
	if(count2 >= 2)
	{
		printf("?");

	}
	else
	{
		for(int i = 0; i < 26; i++)
		{
			if(tmp == a[i])
			{
				printf("%c",'A'+i);
			}
		
		}
	}
	
	
}
 
 // 대소문자 에는 코드값으로 32 차이가 있다. 
 
 // a = 97 / A = 65 / z = 122 / Z = 90
