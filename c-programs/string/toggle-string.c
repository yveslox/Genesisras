#include<stdio.h>

void main()
{
 int len=0,i;
 char a[40],b[40];
 
 printf("Enter original string:");
 scanf("%s",a);
 
 while(a[len]!='\0')
 {     len ++;
 for(i=0;i<len;i++)
 {
  if(a[i]>'A' && a[i] <='Z')
    {
      b[i] = a[i] + 32;
    }
  else if (a[i]>='a' && a[i]<='z')
    {
      b[i]=a[i]-32;
    }
  else 
    {
      b[i]=a[i];
    }
 }
 }
 printf("Toggled string:%s\n",b);

}
