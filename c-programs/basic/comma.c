#include<stdio.h>
#include<math.h>
#include<curses.h>

void main()
{
int n,m;

printf("Program to comma operator\n");

printf("Enter the value of N\n");
scanf("%d",&n);
m =(n,n+5);

printf("\nAfter use of comma operator value is %d\n",m);

}
