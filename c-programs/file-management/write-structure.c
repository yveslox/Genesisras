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
 
 fread(&s,sizeof(s),1,fp);
 
 printf("Roll no. : \n");
 scanf("%d",&s.rno);
 printf("Enter Name :\n");
 scanf("%s",s.alltopicname);
 printf("Enter marks:\n");
 scanf("%f",&s.marks);
 
 fprintf(fp,"%d %s %f\n",s.rno,s.alltopicname,s.marks);
 fclose(fp);
 return 0;
}
