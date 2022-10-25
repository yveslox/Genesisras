#include<stdio.h>

void square(int);

int main()
{
 int a = 20;
 square(a);
 
 printf("a = %d\n",a);
 return 0;
}

void square(int x)
{
 x = x * x;
 printf("x = %d\n",x);
}
