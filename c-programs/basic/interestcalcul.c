#include<stdio.h>
#include<math.h>

int main()
{
float i,p,r,n;

printf("Enter the vallue of p:\n");
scanf("%f",&p);

printf("Enter the vallue of r:\n");
scanf("%f",&r);

printf("Enter the vallue of n:\n");
scanf("%f",&n);

i =(p*r*n)/100;

printf("Interest :: %f\n",i);

return 0;
}
