#include<stdio.h>

int main()
{
    int num1,num2;
    float fraction;
    char character;

    //Taking integer
    printf("Enter two  integernumbers : ");

    scanf("%d%i",&num1,&num2);
    printf("The two numbers you have enter are %d and %i\n",num1,num2);
    
    //Taking float 
    printf("Enter decimal number : ");

    scanf("%f",&fraction);
    printf("The float or fraction that you have enter are %f\n",fraction);
    
    //Taking character
    printf("Enter a character : ");

    scanf("%c",&character);
    printf("The character that you have enter are %c\n",character);

    return 0;
}