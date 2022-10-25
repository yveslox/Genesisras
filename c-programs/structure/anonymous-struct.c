#include<stdio.h>

struct
{
 int feet;
 float inches;
}d1,d2 ={23,7.5};

int main()
{
 d1.feet = 14;
 d1.inches = 8.5;
 
 printf("d1: %d\' - %.1f\n",d1.feet, d1.inches);
 printf("d2: %d\' - %.1f\n",d2.feet, d2.inches);
 
 return 0;
}
