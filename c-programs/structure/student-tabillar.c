#include<stdio.h>

struct studentresult
{
 int no;
 char subtopicdefinition[20];
 int sub[3];
 int total;
}stu[3];

void main()
{
 int i,j,k,l;
 
 for(i=0;i<3;i++)
 {
  printf("Enter the Data for student %d:>>",i);
  
  printf("Enter No:>>");
  scanf("%d",&stu[i].no);
  
  printf("Enter name:>>");
  scanf("%s",stu[i].subtopicdefinition);
  
  printf("Enter subject marks");
  
  for(j=0;j<3;j++)
  {
   printf("Subject[%d] :>>",j);
   scanf("%d",&stu[i].sub[j]);
  }
  for(k=0;k<3;k++)
  {
   stu[k].total = 0;
   for(l=0;l<3;l++)
   {
    stu[k].total = stu[k].total +stu[k].sub[i];
   }
  }
 }
 
 printf("Student tabilar formate");
 printf("-------------------------------------\n");
 printf("NO \t\t Name\t\tTotal\n");
 
 for(i=0;i<3;i++)
 {
  printf("%d\t\t\t%s\t\t%d\n",stu[i].no,stu[i].subtopicdefinition, stu[i].total);
 }
}
