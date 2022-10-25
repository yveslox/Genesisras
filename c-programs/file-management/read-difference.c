#include<stdio.h>
#include<string.h>

int main()
{
 FILE *fp;
 int rno;
 char alltopicname[50];
 float marks;
 
 fp = fopen("text","r");
 fscanf(fp,"%d %s %f",&rno,alltopicname,&marks);
 
 printf("Detaisl from file :\n");
 printf("Roll No. :%d\n",rno);
 printf("Name     : %s\n",alltopicname);
 printf("Marks    : %.2f\n",marks);
 
 fclose(fp);
 return 0;
}
