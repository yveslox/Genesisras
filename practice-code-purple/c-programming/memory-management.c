#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,*ptr,sum = 0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    ptr = (int *)malloc(n*sizeof(int));

    if(ptr == NULL)
    {
        printf("Error! memory not allocated\n");
        return 0;
    }

    printf("Enter element of array : \n");
    for(i =0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum = sum + *(ptr +i);
    }

    printf("The element of array are: \n");
    for(i =0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }

    free(ptr);
    printf("\n");
    return 0;
}