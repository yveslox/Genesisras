#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
 char str[10],tmp;
 
 int i,j,len=0;
 
 printf("Enter any string [max 10 characters]:\n");
 fgets(str,sizeof(str),stdin);
 
 len = strlen(str);
 
 for(i=0;i<len;i++)
 {
  for(j=i+1;j<len;j++)
  {
   if(str[i] > str[j])
   {
    tmp = str[j];
    str[j] = str[i];
    str[i] = tmp;
   }
  }
 }
 printf("String in the alphabetical order is:");
 puts(str);
 
}
