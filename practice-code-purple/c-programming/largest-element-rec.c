#include<stdio.h>

#define MAX 100

int getmaxelement(int []);

int size;

int main()
{
    int arr[MAX],max,i;

    printf("Enter the size of the array : ");
    scanf("%d",&size);
    
    printf("Enter %d elements : \n",size);
    
    for(i = 0 ;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    max = getmaxelement(arr);
    printf("Largest element of array is %d \n",max);
    
    return 0;
}

int getmaxelement(int a[])
{
    static int i = 0,max =-9999;

    if(i < size)
    {
       if(max <a[i])
       max = a[i];
       i++;
       getmaxelement(a);
    }
    return max;    
}
