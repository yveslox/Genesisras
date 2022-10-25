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
 struct student s;
 
 fp = fopen("Student","rb");
 
 while(fread (&s ,sizeof(s),1,fp)==1)
 {
  printf("Roll no. : %d\n",s.rno);
  printf("Enter Name : %s\n",s.alltopicname);
  printf("Enter marks: %.2f\n",s.marks);
 }
 
 fclose(fp);
 return 0;
}
