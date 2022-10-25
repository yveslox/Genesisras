//Hello world
#include<stdio.h>
//#include<curses.h>

int main()
{
int a=10,b=3,c,r;
float d;
printf("The value of A is :%d\n",a);
printf("The value of B is :%d\n",b);

c = a + b;
printf("\nSum is %d",c);

c = a - b;
printf("\nSub is %d",c);

c = a * b;
printf("\nMulti is %d",c);

d = a / b;
printf("\ndiv is %.4f",d);

r = a % b;
printf("\nremaindr is %d\n",r);

return 0;
//getc();
}
