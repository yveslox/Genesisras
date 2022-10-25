#include<stdio.h>
#include<string.h>

void main()
{
 void sortstr(char ch[]);
 char str[80];
 printf("Enter A string:");
 scanf("%s",str);
 //fgets(str,sizeof(str),stdin);
 sortstr(str);
 printf("\n");
}

void sortstr(char s[] )
{
 int i,j;
 char temp;
 for(i=0;i<strlen(s)-1;i++)
 {
  for(j=i+1;j<strlen(s);j++)
  {
   if(s[i]>s[j])
   {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
   }
  }
 }
 printf("%s",s);
}
