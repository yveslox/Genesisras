#include<stdio.h>
#include<ctype.h>

void main()
{
 char c;
 
 printf("Enter any character:>>\n");
 scanf("%c",&c);
 
 if(isupper(c))
 {
   printf("It is Uppercase char...!\n");
 }
 else if(islower(c))
 {
   printf("It is Lowercase char...!\n");
 }
 else if(isdigit(c))
 {
  printf("It is Digicase char...!\n");
 }
 else
 {
  printf("It is Special char...!\n");
 }
}
