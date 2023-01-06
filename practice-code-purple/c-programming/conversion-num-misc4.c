#include<stdio.h>

void decimal_binary(int);
void f(int);
void reverse(int);

int main()
{
    int n;

    printf("Enter an integer in decimal system :");
    scanf("%d",&n);
    
   printf("\nBinary equivalent of decimal value %d using  decimal_binary method is :",n);

   decimal_binary(n);

   printf("\nThe Binary equivalent of decimal value %d using  f() method is :",n);

   f(n);

   printf("\nThe reverse of binary representation of value %d is : ",n);

   reverse(n);
}

void decimal_binary(int i)
{
    if(i<=1)
    printf("%d",i);

    else 
    {
        decimal_binary(i/2);
        printf("%d",i%2);
    }
}

void f(int j)
{
    if(j/2)
    {
        f(j/2);
    }
    printf("%d",j%2);
}

void reverse(int k)
{
    if(k<=1)
    printf("%d",k);

    else 
    {
        printf("%d",k%2);
        f(k/2);
    }
    printf("\n");
}
