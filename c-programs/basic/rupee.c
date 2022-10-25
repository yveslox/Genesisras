#include<stdio.h>
#include<math.h>

int main()
{
int r,p;
float a;

printf("Enter the vallue of a:\n");
scanf("%f",&a);

r = a;

printf("Total rupees:%d\n",r);
p =(a-r)*100;

printf("total paisa:%d\n",p);

return 0;
}
