#include<stdio.h>

int main()
{
 char ch;
 
 printf("Enter String(ctrl+z) to end:\n");
 
 while((ch =getc(stdin))!=EOF)
 {
  putc(ch, stdout);
 }
 return 0;
}
