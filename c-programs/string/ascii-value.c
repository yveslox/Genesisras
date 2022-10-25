#include<stdio.h>
#include<string.h>

void main()
{
 int i;
 char subtopicdef[20];
 
 printf("Enter A string:>>");
 fgets(subtopicdef, sizeof(subtopicdef),stdin);
 
 for(i=0;i<strlen(subtopicdef);i++)
 {
  printf("%c\t%d\n",subtopicdef[i],subtopicdef[i]);
 }
}
