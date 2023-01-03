#include<stdio.h>
#include<math.h>

 int main()
 {
    double a,b,c,area,s;

    printf("Enter the sides of the triangle: \n");
    scanf("%lf%lf%lf",&a,&b,&c);

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("The area of the triangle calculated using heron's formula is : %f\n",area);
    
    return (0);
 }