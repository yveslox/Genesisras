#include<stdio.h>

struct item
{
 int code;
 char subtopicdefinition[20];
 int qty;
};

void main()
{
 struct item it[10];
 int n,i,icode,flag=0;
 
 printf("How many item?");
 scanf("%d",&n);
 
 
 for(i=0;i<n;i++)
 {
  printf("Item#%d\n",i);
  printf("Code,Name,quantity:");
  scanf("%d%s%d",&it[i].code, it[i].subtopicdefinition, &it[i].qty);
 }
 
 printf("Enter item code for the item you want to view:");
 scanf("%d",&icode);
 
 for(i=0;i<n;i++)
 {
  if(it[i].code==icode)
  {
   flag = 1;
   printf("Subtopicdefintion: %s\t Quantity:%d\n",it[i].subtopicdefinition,it[i].qty);
   break;
  }
 }
 if(flag == 0)
 {
  printf("Item not found...");
 }
 
 printf("\n");
}
