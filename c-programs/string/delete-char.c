#include<stdio.h>

void main()
{
 int len=0,i,f,k=0;
 
 char s[40],d,store[40];
 
 printf("Enter original string:");
 fgets(s, sizeof(s), stdin);
 
 while(s[len]!='\0')
 {
  len++;
 }
 
 fflush(stdin);
 
 printf("Enter character to delete:\n");
 scanf("%c",&d);
 
 for(i=0;i<len;i++)
 {
  if(s[i]!=d)
  {
   store[k++] = s[i];
  }
 }
 
 puts(store);
 
 
}
