#include<stdio.h>
#include<math.h>
#define PI 3.142

int main()
{
float r,a;

printf("Enter the radius:\n");
scanf("%f",&r);

a = PI*r*r;


printf("Area of circle is  %.2f\n",a);

return 0;
}
