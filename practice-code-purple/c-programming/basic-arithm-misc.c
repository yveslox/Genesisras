#include<stdio.h>


 int main()
 {
    int a,b,add,substract,multiply;
    float divide;

    printf("Enter two integers: \n");
    scanf("%d%d",&a,&b);
    
    add = a +b;
    substract = a - b;
    multiply = a * b;
    divide = a/b;
    
    printf("Addition of the numbers = %d\n",add);
    printf("Substraction of 2nd numbers from 1 st = %d\n",substract);
    printf("multiplication of the numbers = %d\n",multiply);
    printf("Dividing 1st number from the 2nd = %f\n",divide);
    
    return (0);
 }