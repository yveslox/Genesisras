#include<stdio.h>

void main()
{
float celsius, fahrenheit;

printf("Enter temp in celsius:\n");
scanf("%f", &celsius);

fahrenheit =(1.8 * celsius)+ 32;
printf("temperature in Fahrenheit:%f\n",fahrenheit);

}
