#include<stdio.h>

struct student
{
 int rollno;
 char subtopicdefinition[20];
};

void main()
{
 struct student s1 ={45,"Bahvin"},s2={65,"Dhwani"};
 printf("%d\t%s\n",s1.rollno,s1.subtopicdefinition);
 printf("%d\t%s\n",s2.rollno,s2.subtopicdefinition);
}

