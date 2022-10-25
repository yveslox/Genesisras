#include<stdio.h>

int main()
{
int a,b,c;

c = (a = 20, b= 30, a+ b);

printf("a : %d\n",a);
printf("b : %d\n",b);
printf("c : %d\n",c);

return 0;
}
