#include<stdio.h>

int main()
{
  char str[50];
  printf("Enter a complete name : ");
  
  fgets(str,50,stdin);

  printf("Welcome %s \n",str);

  return 0;    
}