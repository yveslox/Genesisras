#include<stdio.h>
#include<string.h>

int main()
{
    char number[10];
    int flag = 0;
    int length,i = 0;

    printf("Enter a number : ");
    scanf("%s",number);

    length = strlen(number);

    while(number[i++]!= '\0')
    {
        if(number[i] == '.')
        {
            flag = 1;
            break;
        }
    }

    if(flag)
    printf("Entered number is a floating point number\n");
    else 
    printf("Entered number is a integer number\n");
    return 0;
}