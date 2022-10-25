#include<stdio.h>

int main()
{
 char ch;
 
 printf("Enter any character :\n");
 scanf("%c",&ch);
 
 if((ch == 'a') || (ch=='e') || (ch=='i') ||(ch=='o') ||(ch=='u') ||(ch=='A') ||(ch=='E') ||(ch=='I') ||(ch=='O') ||(ch=='U') )
 {
  printf("Character is a Vowel\n");
 }
 else
 {
  printf("Character is not a Vowel\n");
 }
 
 return 0;
}
