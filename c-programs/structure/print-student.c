#include<stdio.h>

struct student
{
 int rollno;
 char subtopicdefinition[20];
};

void main()
{
 struct student s1,s2;
 printf("Enter rollno and subtopicdefinition for first student:");
 scanf("%d%s",&s1.rollno, s1.subtopicdefinition);
 
 printf("Enter rollno and subtopicdefinition for second student:");
 scanf("%d%s",&s2.rollno, s2.subtopicdefinition);
 
 printf("Student#1:%d\t%s\n",s1.rollno, s1.subtopicdefinition);
 printf("Student#2:%d\t%s\n",s2.rollno, s2.subtopicdefinition);
}
