#include<stdio.h>
#include<math.h>

int main()
{
int a,b,temp;

printf("Enter the vallue of a:\n");
scanf("%d",&a);

printf("Enter the vallue of b:\n");
scanf("%d",&b);

printf("Before swapping\n");
printf("a:%d\nb:%d\n",a,b);

temp = a;
a = b;
b = temp;

printf("After swapping\n");
printf("a:%d\nb:%d\n",a,b);

return 0;
}
