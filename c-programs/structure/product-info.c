#include<stdio.h>

struct product
{
 int id;
 char subtopicdefinition[20];
 char piece;
 int price;
 int total[5];
}p[5];

void main()
{
 int total[5],i,n;
 int n1;
 
 printf("Enter the product information");
 printf("Enter the products record:>>");
 scanf("%d",&n);
 
 for(i=0;i<=n;i++)
 {
  total[i] = 0;
  printf("Enter the product alltopicid:>>");
  scanf("%d",&p[i].id);
  
  printf("Enter the products Name:>>");
  scanf("%s",p[i].subtopicdefinition);
  
  printf("Enter the product pieces:>>");
  scanf("%s",&p[i].piece);
  
  printf("Enter the product price:>>");
  scanf("%d",&p[i].price);
  total[i] = p[i].piece*p[i].price;
  printf("\nTotal ::>>%d",total[i]);
 }
  
  printf("\nEnter pid:");
  scanf("%d",&n1);
  
  for(i=0;i<=n;i++)
  {
   if(p[i].id==n1)
   {
     printf("AlltopicId:==> %d Total:>>%s\n",p[i].id,p[i].subtopicdefinition);
   }
  }
 
}
