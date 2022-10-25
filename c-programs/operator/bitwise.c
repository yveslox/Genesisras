#include<stdio.h>
#include<curses.h>

int main()
{
 int a = 3, b= 6,c;
 
 printf("a = %d",a);
 printf("b = %d",b);
 
 c = a & b ;
 printf("a & b = %d",c);
 
 c = a | b ;
 printf("a | b = %d",c);
 
 c = a ^ b ;
 printf("a ^ b = %d",c);
 
 c = ~a ;
 printf(" ~a = %d",c);
 
 c = a << 3 ;
 printf("a << 3 = %d",c);
 
 c = b >> 2;
 printf("b >> 2 = %d",c);
 
 return 0;
}
