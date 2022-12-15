#include<stdio.h>
#include<stdlib.h>

int main()
{
    int c,d,a[10][10],b[10][10],n,temp;
    
    printf("Enter the dimension of the matrix :\n");
    scanf("%d",&n);

    printf("Enter the %d element of the matrix :\n",n*n);
    for(c =0;c<n;c++)
    {
        for(d = 0;d<n;d++)
        {
            scanf("%d",&a[c][d]);
        }
    }

    for(c=0;c<n;c++)
    {
        for(d = 0;d<n;d++)
        {
            b[d][c]=a[c][d];
        }
    }

    printf("The original matrix is :\n");
    for(c = 0;c<n;c++)
    {
        for(d = 0;d<n;d++)
        {
            printf("%d\t",a[c][d]);
        }
        printf("\n");
    }

    printf("The transpose matrix is :\n");
    for(c = 0;c<n;c++)
    {
        for(d = 0;d<n;d++)
        {
            printf("%d\t",b[c][d]);
        }
        printf("\n");
    }

    for(c = 0;c<n;c++)
    {
        for(d = 0;d<n;d++)
        {
           if(a[c][d] != b[c][d])
           {
            printf("Matrix is not symmetric\n");
            exit(0);
           }
        }
        
    }
    printf("Matrix is symmetric\n");
     
    return 0;
}