#include<stdio.h>

int main()
{
 int a;
 
 a = (2 < 1) || (4 < 3);
 printf("(2 < 1) || ( 4 < 3) = %d\n",a);
 
 a = (2 < 1) || (4 > 3);
 printf("(2 < 1) || ( 4 > 3) = %d\n",a);
 
 a = (2 > 1) || (4 < 3);
 printf("(2 > 1) || ( 4 < 3) = %d\n",a);

 a = (2 > 1) || (4 > 3);
 printf("(2 > 1) || ( 4 > 3) = %d\n",a);

}
