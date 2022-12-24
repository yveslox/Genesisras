#include<stdio.h>

int getsum(int);


int main()
{
    int n,sum;
    printf("Enter the range of n: \n");
    scanf("%d",&n);
    sum = getsum(n);

    printf("The sum of first %d numbers is %d \n",n,sum);

    return 0;
}

int getsum(int aj)
{
    static int sum = 0;

    if(aj > 0)
    {
        sum = sum + aj;
        getsum(aj - 1);
    }
    
    return sum;
    
}
