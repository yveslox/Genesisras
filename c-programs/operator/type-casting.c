#include<stdio.h>

int main()
{
 int a = 10, b = 20;
 
 float c = 10.50;
 
 long d = 20L,e;
 
 e =(((long)a+(long)c)*d)+(long)b;
 
 printf("Value of e ::: %ld\n",e);
 
 return 0;
}
