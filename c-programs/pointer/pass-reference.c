#include<stdio.h>

void square(int*);

int main()
{
 int a = 10;
 
 square(&a);
 
 printf("a = %d\n",a);
 return 0;
}

void square(int *pa)
{
 *pa = *pa * *pa;
 printf("*pa = %d\n",*pa);
}
