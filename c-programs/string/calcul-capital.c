#include<stdio.h>
#include<string.h>
void main()
{
 char m[40];
 int cap=0,small=0,spec=0,i;
 
 printf("Enter a string:>>");
 fgets(m,sizeof(m),stdin);
 
 for(i=0;i<strlen(m);i++)
 {
  if(m[i] >='A' && m[i] <='Z')
  {
    cap++;
  }
  else if(m[i]>='a' && m[i]<='z')
  {
   small++;
  }
  else
  {
   spec++;
  }
 }
 printf("Capital letters: %d\n",cap);
 printf("Small letters: %d\n",small);
 printf("Special letters: %d\n",spec);
}
