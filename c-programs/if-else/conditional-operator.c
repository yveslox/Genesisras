#include<stdio.h>

void main()
{
 int a,b,c;
 printf("Enter three numbers :\n");
 scanf("%d%d%d",&a,&b,&c);
 printf("Max is :%d\n",a>b?a>c?a:c:b>c?b:c);
}
