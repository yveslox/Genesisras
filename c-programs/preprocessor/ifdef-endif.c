#include<stdio.h>
#include<stdlib.h>

#define INDIA 1

//#define USA 1

#ifdef INDIA
   #define PI 3.14159
#endif


#ifdef  USA
   #define PI 3.14
#endif


int main()
{
 float r,a;
 
 printf("Enter radius :");
 scanf("%f",&r);
 
 a = PI * r * r;
 
 printf("Area of circle : %f\n",a);
 
 return 0;
}
