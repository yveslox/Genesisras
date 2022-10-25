#include<stdio.h>

void main()
{
 int len = 0,i;
 char s[40],c,r;
 
 printf("Enter original string:");
 scanf("%s",s);
 
 while(s[len]!='\0')len++;
 fflush(stdin);
 
 printf("Enter character to replace:");
 scanf("%c",&c);
 fflush(stdin);
 printf("Enter new character:");
 scanf("%c",&r);
 
 for(i=0;i<len;i++)
 {
  if(s[i]==c)
  {
   s[i] = r;
  }
 }
 printf("%s\n",s);
}
