#include<stdio.h>

void main()
{
 int i=0,j=0;
 char s[40];
 printf("Enter the word u want to format:>>");
 fgets(s, sizeof(s), stdin);
 
 for(i=0;s[i]!='\0';i++)
 {
  for(j=0;j<=i;j++)
  {
   printf("%c",s[j]);
  }
  printf("\n");
 }
}
