#include<stdio.h>

void main()
{
 char s1[80],s2[20];
 
 int len1=0,len2=0,i,j,found=0;
 
 printf("Enter the string:>>");
 fgets(s1, sizeof(s1), stdin);
 while(s1[len1]!='\0')len1++;
 
 printf("Enter the world fo find:>>");
 fgets(s2, sizeof(s2), stdin);
 while(s2[len2]!='\0')len2++;
 
 for(i=0;i<len1;i++)
 {
  found=1;
  for(j=0;j<len2;j++)
  {
   if(s1[i+j]!=s2[j])
   {
    found=0;
    break;
   }
  }
  if(found==1)
  {
   printf("\nString found\n");
   break;
  }
 }
 if(found==0)
 {
  printf("String not found\n");
 }
printf("%d",found);
}
