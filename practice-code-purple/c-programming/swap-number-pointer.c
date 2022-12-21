#include<stdio.h>

int main()
{
    
    int a,b;
    int *ptra,*ptrb;
    int temp; 
     
        printf("Enter value for a : \n");
        scanf("%d",&a);

       printf("Enter value for a : \n");
        scanf("%d",&b);

     
    
    printf("The value before swapping are : a = %d  b = %d\n",a,b);
   
    ptra = &a;
    ptrb = &b;

    temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;

    printf("The value after swapping are : a = %d  b = %d\n",a,b);
    return 0;
}