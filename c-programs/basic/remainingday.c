#include<stdio.h>
#include<math.h>

int main()
{
int a,b,r;

printf("Enter the vallue of a:\n");
scanf("%d",&a);


b= a/30;

printf("Month::%d\n",b);
r=a%30;
printf("Remaining days::%d\n",r);

return 0;
}
