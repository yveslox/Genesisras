#include<stdio.h>
#include<string.h>

void main()
{
 void sortname(char[10][10],int);
 
 char names[10][10];
 int i,n;
 printf("How many nammes?");
 scanf("%d",&n);
 
 printf("\nEnter %d names below\n",n);
 
 for(i=0;i<n;i++)
 {
  scanf("%s",names[i]);
 }
 
 sortname(names,n);
 
 printf("Sorted names\n");
 for(i=0;i<n;i++)
 {
  printf("%s\n",names[i]);
 }
}

void sortname(char s[10][10],int n)
{
 char temp[80],i,j;
 for(i=0;i<n-1;i++)
 {
  for(j=i-1;j<n;j++)
  {
   if(strcmp(s[i],s[j])>0)
   {
    strcpy(temp,s[i]);
    strcpy(s[i],s[j]);
    strcpy(s[j],temp);
   }
  }
 }
}
