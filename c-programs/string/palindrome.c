#include<stdio.h>
#include<string.h>

void main()
{
 int i,j,flag=0;
 
 char s[20];
 
 printf("Enter string:");
 fgets(s, sizeof(s), stdin);
 puts(s);
 
 for(i=0,j=strlen(s)-1;i<strlen(s)/2;i++,j--)
 {
  if(s[i]!=s[j])
  {
   flag=1;
   break;
  }
 }
 printf("%d\n",flag);
 if(flag==0)
   printf("Palindrome\n");
 else
   printf("Not palindrome\n");
}
