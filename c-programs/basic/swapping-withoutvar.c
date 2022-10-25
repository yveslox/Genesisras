#include<stdio.h>
#include<math.h>

int main()
{
int a,b;

printf("Enter the vallue of a:\n");
scanf("%d",&a);

printf("Enter the vallue of b:\n");
scanf("%d",&b);

printf("Before swapping\n");
printf("a:%d\nb:%d\n",a,b);

a = b + a;
b = a - b;
a = a - b;

printf("After swapping\n");
printf("a:%d\nb:%d\n",a,b);

return 0;
}
