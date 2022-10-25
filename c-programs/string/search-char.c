#include<stdio.h>

void main()
{
 int i=0,c=0;
 
 char s[25],dis;
 
 printf("Enter the string :>>");
 fgets(s,sizeof(s),stdin);
 
 printf("Enter the character u want to find:\n");
 scanf("%c",&dis);
 
 printf("The position u want to find are as below\n");
 
 for(i=0;s[i]!='\0';i++)
 {
  if(s[i]==dis)
  {
   printf("%d ",i);
   c++; 
  }
 }
 printf("\nNumber of time occurence: %d\n",c);
 
}
