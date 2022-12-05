#include<stdio.h>

int main()
{
    int i,n;
    long int fact = 1;

    printf("Enter the number : \n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    
    printf("Factorial of %d is %ld\n",n,fact);
    return 0;
}