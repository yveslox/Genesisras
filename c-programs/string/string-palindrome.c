#include<stdio.h>
#include<string.h>

void main()
{
 char s[100],i,j,f=0;
 printf("Enter the word:");
 fgets(s,sizeof(s),stdin);
 
 j=strlen(s);
 
 for(i=0;i<=j/2;i++)
 {
  if(s[i]==s[j-1])
  {
   f = 0;
  }
  else
  {
   f = 102;
   printf("Not palindrom\n");
   break;
  }
  j--;
 }
 if(f==0)
 {
  printf("Palindrom\n");
 }
 
}
