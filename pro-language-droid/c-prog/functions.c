#include<stdio.h>

int sumValue(int a,int b)
{
    int sum = a+b;
    return sum;
}

void printName(char name[])
{
    printf("Name: %s\n",name);
}

int main()
{
    int sum = sumValue(10,8);
    printf("Sum : %d\n",sum);
    char name[50] = "xyz ABC";
    printName("name");
}