#include<stdio.h>

void main()
{
 char s1[80],s2[20],store[40];
 
 int len1=0,len2=0,i,j,k,found=0;
 
 printf("Enter the string:>>");
 fgets(s1, sizeof(s1), stdin);
 while(s1[len1]!='\0')
 {
   len1++;
 }
 printf("Enter the world fo delete:>>");
 fgets(s2, sizeof(s2), stdin);
 while(s2[len2]!='\0')
 {
   len2++;
 }
 
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
   for(k=i-1,j=i+len2;j<=len1;j++,k++)
   {
     store[k] =s1[j];
   }
   puts(store);
   break;
  }
 }
 if(found==0)
 {
  printf("Word to delete not found\n");
 }
printf("%d",found);
}
