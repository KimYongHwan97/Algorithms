#include<stdio.h>
#include<string.h>

int main()
{
   char a[99999], a2[2] = "0";
   int size,size2,i = 0, count;
   
   for(;;)
   {
      scanf("%s",&a);
      
      count = strcmp(a,a2);
      if(count == 0)
      {
         return 0;
      }
      
      size = strlen(a);
   
      int i = 0;
      for(i; i < size/2; i++)
      {
         if(a[i] != a[size-i-1])
         {
            break;
         }
      }
   
      if( i == size/2)
      {
         printf("yes\n");
      }
      else
      {
         printf("no\n");
      }
   
   }
   
}
