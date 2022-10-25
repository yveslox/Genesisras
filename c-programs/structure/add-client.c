#include<stdio.h>

struct client
{
 int no;
 char subtopicdefinition[30];
 char address[80];
 char city[20];
 char state[20];
 int pin[20];
}p[5];

void main()
{
 int i,n,n1;
 struct client p[5];
 
 printf("Enter the client details:");
 scanf("%d",&n);
 
 printf("*****************************\n");
 
 for(i=0;i<=n;i++)
 {
  printf("Enter the client number:>>");
  scanf("%d",&p[i].no);
  
  printf("Enter the client subtopicdefinition:>>");
  scanf("%s",p[i].subtopicdefinition);
  
  printf("Enter the client address:>>");
  scanf("%s",p[i].address);
  
  printf("Enter the client city:>>");
  scanf("%s",p[i].city);
  
  printf("Enter the client state:>>");
  scanf("%s",p[i].state);
  
  printf("Enter the pin code:>>");
  scanf("%d",p[i].pin);
 }
 
 printf("\nEnter the no:>>");
 scanf("%d",&n1);
 
 for(i=1;i<=n;i++)
 {
  if(p[i].no==n1)
  {
   printf("No:>>%d subtopicdefinition:>>%s address:>>%s\n",p[i].no, p[i].subtopicdefinition, p[i].address);
  }
 }
 
}
