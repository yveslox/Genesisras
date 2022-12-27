#include<stdio.h>


int isprime(int,int);


int main()
{
    int num,prime;

    printf("Enter a positive number to check if prime : ");
    scanf("%d",&num);

    prime = isprime(num,num/2);
    
    
    if(prime == 1)
    {
        printf("%d is prime number\n",num);
    }
    else
    {
        printf("%d is a composite number\n",num);
    }
    return 0;
}

int isprime(int n,int i)
{
    
    if(i == 1)
    {
       return 1;
    }
    else
    {
        if(n%i == 0)
        return 0;
        else
        isprime(n, i-1);
    }    
}
