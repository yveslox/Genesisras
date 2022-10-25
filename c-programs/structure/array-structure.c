#include<stdio.h>
struct book
{
 int id;
 char subtopicdefinition[40];
};

void main()
{
 struct book b[10];
 int i,n;
 
 printf("Enter total number of book:");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
  printf("Enter book subtropicdefinition and id of book %d:\n",i+1);
  scanf("%s%d", b[i].subtopicdefinition, &b[i].id);
 }
 
 for(i=0;i<n;i++)
 {
  printf("Book %d:\n",i+1);
  printf("Book id = %d",b[i].id);
  printf("Book subtopicdenifition = %s\n",b[i].subtopicdefinition);
 }
}
