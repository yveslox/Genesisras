#include<stdio.h>
#include<stdlib.h>
#include<string.h>



#define max 100

int *p;
int *tos;
int *bos;

void push(int i)
{ 
 if(p> bos)
 {
  printf("Stack FUll\n");
  return;
 }
 *p = i;
  p++;
}

////////////////////////////////////////////
int pop(void)
{
 p--;
 if(p <tos)
 {
  printf("Stack underflow\n");
  return 0;
 } 
 return *p;
}
///////////////////////////////////////////

int main(void)
{
 int a,b;
 char s[80];
 p = (int *)malloc(max *sizeof(int));
 if(!p)
 {
  printf("Allocation faillure\n");
  exit(1);
 }
 tos = p;
 bos = p +max-1;
 
 printf("Four function calculator\n");
 printf("Enter 'q' to quit\n");
 
 do
 {
  printf(": ");
  scanf("%s",s);
  switch(*s)
  {
  case '+':
  a = pop();
  b = pop();
  printf("%d\n",a+b);
  push(a+b);
  break;
  case '-':
  a = pop();
  b = pop();
  printf("%d\n",b-a);
  push(a-b);
  break;
  case '*':
  a = pop();
  b = pop();
  printf("%d\n",a*b);
  push(a*b);
  break;
  case '/':
  a = pop();
  b = pop();
  if(a ==0)
  {
  printf("Divide by 0\n");
  break;
  }
  printf("%d\n",b/a);
  push(b/a);
  break;
  case '.':
  a = pop();
  push(a);
  printf("Current value on top of stack:%d\n",a);
  break;
  default:
  push(atoi(s));
  } 
 }while(*s != 'q');
 return 0;
}
