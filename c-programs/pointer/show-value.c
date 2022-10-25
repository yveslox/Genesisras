#include<stdio.h>
#include<string.h>

void main()
{
 int a = 23;
 int *p;
 p = &a;
 printf("Address of a : %p\n",&a);
 printf("Address of p : %p\n",p);
 
 printf("Value of a: %d\n",a);
 printf("Value of *p: %u\n",*p);

}
