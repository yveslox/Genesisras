#include<stdio.h>

int main()
{
 FILE *fp;
 int rno = 290;
 char alltopicname[50] ="Nils";
 float marks = 84.69;
 
 fp= fopen("data-1.txt","w");
 fprintf(fp,"%d %s %f",rno,alltopicname,marks);
 printf("Details saved in file\n");
 
 fclose(fp);
 return 0;
}
