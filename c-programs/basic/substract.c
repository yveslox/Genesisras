//Hello world
#include<stdio.h>
//#include<curses.h>

int main()
{
int a,b,sum;

printf("Enter any two value of integers\n");
scanf("%d%d",&a,&b);

sum = a +~ b + 1 ;
printf("Difference of two integers:%d\n",sum);

return 0;
//getc();
}
