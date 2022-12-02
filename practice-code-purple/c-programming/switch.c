#include<stdio.h>

int main()
{
  char grade;
  printf("Enter your garde : \n");
  
  scanf("%c",&grade);

  switch(grade)
  {
    case 'A':
    printf("Excellent\n");
    break;

    case 'B':
    printf("Keep it up\n");
    break;

    case 'C':
    printf("Well done\n");
    break;

    case 'D':
    printf("you passed\n");
    break;

    case 'F':
    printf("Excellent\n");
    break;

    default:
    printf("Invalid grade\n");

  }
  printf("Your grade is %c\n",grade);
  return 0;    
}