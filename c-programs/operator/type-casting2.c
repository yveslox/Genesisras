#include<stdio.h>

int main()
{
 float a;
 
 int x= 10,y =3;
 
 a = x / y ;
 printf("Value of a (without casting )= %f\n",a );
 
 a = (float)x /y;
 printf("Value of a (with casting )= %f\n",a );
 
 return 0;
}
