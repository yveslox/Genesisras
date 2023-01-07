#include<stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in celsius : ");
    scanf("%f",&celsius);
    
    fahrenheit =(1.8*celsius)+32;

    printf("Temperature in fahrenheit is : %f \n",fahrenheit);

    
}
