#include<stdio.h>

void cube(int *);

int main()
{
  int a = 10;
  cube(&a);
  
  printf("a = %d\n",a);
  
  return 0;
}

void cube(int *pa)
{
 *pa =(*pa) * (*pa) *(*pa);
 printf("*pa = %d\n",*pa);
}
