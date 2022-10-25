#include<stdio.h>
#include<string.h>

void main()
{
 char str[50],i,j,a,b=0;
 
 printf("Enter any subtopicdefinition:>>");
 fgets(str,sizeof(str),stdin);
 
 a = strlen(str);
 
 for(i=0;i<a;i++)
 {
  for(j=0;j<a;j++)
  {
   if(str[i] == str[j])
   b++;
  }
  printf("%c = %d",str[i],b);
  b=0;
  printf("\n");
 }
 
}
