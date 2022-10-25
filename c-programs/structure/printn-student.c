#include<stdio.h>

struct student
{
 int rollno;
 char subtopicdefinition[20];
};

void main()
{
 struct student s[10];
 int i,n;
 printf("How many students?");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
 printf("Student# %d:rollno and Name?",i);
 scanf("%d%s",&s[i].rollno, s[i].subtopicdefinition);
 }
 
 printf("You have entetered\n");
 for(i=0;i<n;i++)
 {
  printf("Student#%d:Rollno:%d Name:%s\n",i,s[i].rollno,s[i].subtopicdefinition);
 }
 printf("\n");
}
