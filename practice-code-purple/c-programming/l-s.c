#include<stdio.h>

int a,b;

int main()
{
 printf("Enter the two values to find the gratest and smallest number : \n");
 scanf("%d%d",&a,&b);

 if(a==b)
 printf("Both are equal");

 else if(a<b)
 {
    printf("The largest number is %03d\n",b);
    printf("The smallest number is %03d\n",a);
 }
 
 else if(b<a)
 {
    printf("The largest number is %03d\n",a);
    printf("The smallest number is %03d\n",b);
 }
  
return 0;    
}