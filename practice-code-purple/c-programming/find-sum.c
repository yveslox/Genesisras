#include<stdio.h>

int main()
{
    int n,sum = 0,c,remainder;

    printf("Enter the number you want to add digits of : ");
    scanf("%d",&n );


    while(n!=0)
    {
        remainder = n %10;
        sum += remainder;
        n = n/10;
    }

    printf("Sum of digits of entered number is = %d\n",sum);
   
    return 0;
}