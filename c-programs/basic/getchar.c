#include<stdio.h>
#include<math.h>
#include<curses.h>

void main()
{
char a,b;

printf("Enter one character:\n");
scanf("%c",&a);

printf("Input character is ==> %c\n",a);
//fflush(stdin);

printf("\nEnter second character\n");
b=getchar();

printf("ASCII value of character(%c) is=> %d\n",b,b);


}
