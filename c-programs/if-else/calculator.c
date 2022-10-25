#include<stdio.h>
#include<curses.h>

int main()
{
 char op;
 float a,b,result;
 
 printf("Enter no of A:\n");
 scanf("%f",&a);
 
 printf("Enter no of B:\n");
 scanf("%f",&b);
 
 printf("Operator [+,-,*,/]::\n");

 fflush(stdin);
 scanf("%c",&op);
 
 if(op=='+')
 {
  result = a + b ;
  printf("result:>>%.2f\n",result);
 }
 
 else if(op=='*')
 {
  result = a * b ;
  printf("result:>>%.2f\n",result);
 }
 
  else if(op=='-')
 {
  result = a - b ;
  printf("result:>>%.2f\n",result);
 }
  else if(op=='/')
 {
  result = a / b ;
  printf("result:>>%.2f",result);
 }
 else
 {
   printf("Invalid choice\n");
 }
 
 return 0;
}
