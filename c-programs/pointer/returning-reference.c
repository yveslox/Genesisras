#include<stdio.h>

int* max(int*, int*);

int main()
{
 int a = 23,b = 14, *p;
 
 p = max(&a,&b);
 
 printf("Maximum = %d\n",*p);
 
 return 0;
}

int* max(int *pa, int *pb)
{
 if(*pa > *pb)
 return pa;
 else
 return pb;
}
