#include<stdio.h>

#include"myheader.h"

int main()
{
 int a = 30,b =20,res;
 
 res = add(a,b);
 
 printf("Sum = %d\n",res);
 
 res = sub(a,b);
 printf("Difference = %d\n",res);
 
 return 0;
}
