#include<stdio.h>

struct item
{
 int code;
 char subtopicdefinition[20];
 int qty;
};

void main()
{
 struct item it[10],t;
 
 int n,i,j;
 
 printf("How many items?");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
 printf("Item#%d\n",i);
 printf("Code,Name,quantity:");
 scanf("%d%s%d",&it[i].code,it[i].subtopicdefinition,&it[i].qty);
 }
 
 for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(it[i].code > it[j].code)
   {
    t = it[i]; it[i] = it[j];it[j] =t;
   }
  }
 }
 printf("After sorting on code\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t%s\t%d\n",it[i].code,it[i].subtopicdefinition,it[i].qty);
 }
}
