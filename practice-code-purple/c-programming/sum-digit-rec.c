#include<stdio.h>

int sumdigit(int);


int main()
{
    int num,sum;
    printf("Enter a number : \n");
    scanf("%d",&num);
    
    sum = sumdigit(num);

    printf("The sum of digit %d is: %d \n",num,sum);

    return 0;
}

int sumdigit(int num)
{
    int s,a;
    s = s + (num%10);
    a = num/10;
    if(a > 0)
    {
        sumdigit(a);
    }
    
    return s;
    
}
