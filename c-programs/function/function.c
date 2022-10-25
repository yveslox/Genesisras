#include<stdio.h>
void printline();

void main()
{
 printline();
 printf("\n It is the programming\n");
 printline();
 printf("\n");
}

void printline(void)
{
 int i;
 
 for(i=1;i<23;i++)
 {
  printf("-");
 }
}
