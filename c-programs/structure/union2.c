#include<stdio.h>

union abc
{
 char c;
 int i;
 float f;
};

int main()
{
 union abc x;
 
 x.c='N';
 printf("x.c = %c\n",x.c);
 
 x.i = 10;
 printf("x.i = %d\n",x.i);
 
 x.f = 1993.5;
 printf("x.f = %f\n",x.f);
 
 
}
