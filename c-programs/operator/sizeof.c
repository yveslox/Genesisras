#include<stdio.h>

int main()
{
 int a = 100, b;
 
 b = sizeof(a);
 printf("The size of a : %d\n", b);
 
 b = sizeof(double);
 printf("The size of double : %d\n", b);
 
 b = sizeof(123L);
 printf("The size of 123L : %d\n", b);

 b = sizeof(123.45);
 printf("The size of 123.45 : %d\n", b);

 b = sizeof(123.45f);
 printf("The size of 123.45f : %d\n", b);


return 0;
}
