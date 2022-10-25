#include <stdio.h>

int sumvalue(int a, int b)
{
    int sum=a+b;
    return sum;
}

void printname(char name[])
{
    printf("Name: %s\n",name);
    
}

int main()
{
 int sum=sumvalue(12,7);
 printf("Sum : %d\n",sum);
 
 char name[50]="Abc Bcd";
 printname(name);
 
 
}
