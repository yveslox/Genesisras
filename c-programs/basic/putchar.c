#include<stdio.h>
#include<math.h>
#include<curses.h>

void main()
{
char a,b;

printf("Enter one character:\n");
a= getchar();

printf("Lowercase character is ==>\n");
putchar(a);

printf("\nCharacter in uppercase ==>\n");
putchar(a - 32);
printf("\n");
}
