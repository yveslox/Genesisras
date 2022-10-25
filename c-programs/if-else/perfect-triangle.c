#include<stdio.h>
#include<math.h>

void main()
{
 float a,b,c,x,y,z;
 
 
 printf("Enter first side\n");
 scanf("%f",&a);
 
 printf("Enter second side\n");
 scanf("%f",&b);

 printf("Enter third side\n");
 scanf("%f",&c);

 x=sqrt((a*a)+(b*b));

 y=sqrt((b*b)+(c*c));

 z=sqrt((c*c)+(a*a));

 if(c==x || a == y || b == z)
 {
   printf("Right triangle\n");
 }
 
 else
 {
   printf("Not right Triangle\n");
 }
 
}

