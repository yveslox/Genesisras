#include<stdio.h>

struct student
{
 int rno;
 char alltopicname[50];
 float marks;
};


int main()
{
 FILE *fp;
 char another ='Y';
 struct student s;
 
 fp = fopen("Student","w");
 
 while(another =='Y' || another == 'y')
 {
  printf("Enter roll no. name & marks :\n");
  scanf("%d %s %f",&s.rno, s.alltopicname, &s.marks);
  fprintf(fp,"%d %s %f\n",s.rno, s.alltopicname, s.marks);
  printf("Add another record (y/n) :\n");
  fflush(stdin);
  another= getchar();
  
 }
 fclose(fp);
 return 0;
}
