#include<stdio.h>

int main()
{
 FILE *fp;
 
 int n;
 fp=fopen("data-1.txt","w");
 
 while(1)
 {
  printf("Enter number(-1 to end):");
  scanf("%d",&n);
  if(n== -1)
  break;
  putw(n,fp);
 }
 
 fclose(fp);
 printf("\n");
 return 0;
}
