#include<stdio.h>

int main()
{
 FILE *fp;
 int n;
 fp=fopen("data-1.txt","r");
 
 printf("Enter numbers are: ");
 n = getw(fp);
 
 while(n!=EOF)
 { 
  printf("%d ",n);
  n = getw(fp);
 }
 fclose(fp);
 printf("\n");
 return 0;
}
