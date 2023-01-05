#include<stdio.h>
#include<math.h>

int binary_decimal(int n);

int main()
{
    int n;
    char c;

    printf("Enter the binary number :");
    scanf("%d",&n);

    printf("The decimal equivalent of %d is %d\n",n,binary_decimal(n));
}

int binary_decimal(int n)
{
    int decimal = 0,i = 0,rem;

    while(n!=0)
    {
        rem =n %10;
        n = n / 10;

        decimal +=rem*pow(2,i++);
    }
    return decimal;
}