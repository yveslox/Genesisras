#include<stdio.h> 

int main()
{
//interger variable declaration
int num = 12;
//pointers variable declaration.It stores address of variable num.
int*p = &num;

//value of num
printf("value: %d\n", *p);
 
 
//memory address of num 
printf("Memory address: %ls", p);
printf("\n");

}
