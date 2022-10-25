#include<stdio.h>

#define PI 3.14159

int main()
{
 float r,a;
 
 printf("Enter radius : ");
 scanf("%f",&r);
 
 a = PI * r * r;
 
printf("Area of circle : %f\n",a);

return 0;
}
