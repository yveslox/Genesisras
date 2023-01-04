#include<stdio.h>


 int main()
 {
    int a,b,add,substract,multiply,remainder;
    float divide;

    printf("Enter two integers: \n");
    scanf("%d%d",&a,&b);
    
    add = a +b;
    substract = a - b;
    multiply = a * b;
    divide = a/(float)b;
    remainder = a %b;

    printf("Addition of the numbers = %d\n",add);
    printf("Substraction of 2nd numbers from 1 st = %d\n",substract);
    printf("multiplication of the numbers = %d\n",multiply);
    printf("Dividing 1st number from the 2nd = %f\n",divide);
    printf("Remainder one dividing 1st number by the 2nd is %d\n",remainder);

    return (0);
 }