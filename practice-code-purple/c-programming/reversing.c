#include<stdio.h>
#include<ctype.h>

int main()
{
  char alphabet;
  printf("Enter an alphabet : ");
  
  putchar('\n');

  alphabet =getchar();

  printf("Reverse case of %c is : ",alphabet);
  if(islower(alphabet))
   putchar(toupper(alphabet));
  else
   printf("%c \n",tolower(alphabet));
  
  return 0;    
}