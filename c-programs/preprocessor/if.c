#include<stdio.h>

#define MAX 1

int main()
{
 int a = 40,b =20;
 
  #if MAX ==1
   printf("Maximum = %d\n",(a>b?a:b));
  #else
   printf("Minimum = %d\n",(a>b?a:b));
  #endif
  
  return 0;
}
