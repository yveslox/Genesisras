#include<stdio.h>

void printfibo(int);


int main()
{
    
    int k,n;
    long int i = 0,j = 1;
    printf("Enter the length of fibonacci series: \n");
    scanf("%d",&n);
    
    printf("first %d terms of fibonacci series are : \n",n);
    printf("%d ",1);

    printfibo(n);

    return 0;
}

void printfibo(int aj)
{
    static long int first = 0,second = 1,sum;

    if(aj>1)
    {
        sum = first + second;
        first = second;
        second = sum;
        printf("%ld ",sum);
        printfibo(aj-1);
    }
    else
    {
        printf("\n\n\n");
    }
    
}
