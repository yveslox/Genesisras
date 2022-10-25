#include<stdio.h>

#define MIN(a,b) (((a)<(b))?a:b)


int main()
{
 int x,y;
 
 x = 10;
 y = 20;
 
 printf("The minimum is = %d\n",MIN(x,y));
 
 return 0;
}
