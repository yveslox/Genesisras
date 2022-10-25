#include<stdio.h>
#include<ctype.h>
#include<curses.h>

int main()
{
 int ch;
 
 printf("Enter a character :::\n");
 ch = getchar();
 
 if(isalnum(ch))
 {
  printf("It is alpha-numeric character\n"); 
 }
 else
 {
  printf("This is not a alpha-numeric character\n");
 }
 return 0;
}
