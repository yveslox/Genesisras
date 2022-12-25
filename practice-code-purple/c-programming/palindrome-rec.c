#include<stdio.h>

int ispal(int);

int n;

int main()
{
    int palidrome;
    printf("Enter a number : \n");
    scanf("%d",&n);
    
    palidrome = ispal(n);

    if(palidrome == 1)
     printf("%d is palidrome \n",n);
    else
     printf("%d is not palidrome \n",n);

    return 0;
}

int ispal(int aj)
{
    int static sum = 0;
    
    if(aj != 0)
    {
        sum = sum * 10 + aj % 10;
        ispal(aj/10);
    }
    else if(sum == n)
    return 1;
    else 
    return 0;
    
}
