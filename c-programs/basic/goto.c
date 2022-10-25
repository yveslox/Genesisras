#include<stdio.h>
//#include<curses.h>

int main()
{
 int a = 10;
 //clrsc();
 
 printf("Nils patel\n");
 
 if(a== 10)
 {
  goto LABEL;
 }
 
 printf("This simple\n");
 printf("Program\n");
 
 LABEL:
 printf("GO to statement\n");
 printf("Forword jump\n");
 //getch();
 return 0;
 
}
