#include<stdio.h>
#include<math.h>
#include<curses.h>

void main()
{
char a,b;

printf("Enter one character:\n");
a = getche();

printf("Second character\n");
b = getche();

printf("First character ==> %c\nsecond character==>%c\n",a,b);

}
