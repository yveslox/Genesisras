#include<stdio.h>

void cube(int );

int main()
{
 int a = 2;
 cube(a);
 
 printf("a = %d\n",a);
 
 return 0;
}

void cube(int x)
{
 x = x * x * x;
 printf("x = %d\n",x);
}
