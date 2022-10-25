#include<stdio.h>

int main()
{
 //integer variable declaration
 int num = 12;
 
 //pointer variable declaration
 
 int *p=&num;
 
 //value of num
 printf("value :%d ",*p);
 printf("\n");
 
 //memory address of num
 printf("Memory address : %p", p);
 
 printf("\n");

}
