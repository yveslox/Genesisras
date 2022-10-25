#include<stdio.h>

struct distance
{
 int feet;
 float inches;
};

struct distance d1;

int main()
{
 struct distance d2;
 
 d1.feet = 23;
 d1.inches = 7.5;
 
 d2.feet = 14;
 d2.inches = 2.5;
 
 printf("\n%d\' -%f\n",d1.feet , d1.inches);
 printf("%d\' -%f\n",d2.feet , d2.inches);
 
 return 0;
}
