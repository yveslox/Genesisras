#include<stdio.h>
#include<math.h>

int main()
{
 int a = 10, b;
 
 b = ++a;
 printf("After prefix increment:\n");
 printf("a = %d and b = %d\n",a ,b);
 
 a = 10;
 b = a ++;
 
 printf("After postfix increment:\n");
 printf("a = %d and b = %d\n",a ,b);
 
return 0;
}
