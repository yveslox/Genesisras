#include<stdio.h>

int main()
{
    int n,m,c,d,matrix[10][10];
    int counter = 0;
    printf("Enter the number of rows columns of the matrix \n");

    scanf("%d%d",&m,&n);

    printf("Enter the %d element of the matrix :",m*n);

    for(c =0;c<m;c++)
    {
        for(d = 0;d<n;d++)
        {
            scanf("%d",&matrix[c][d]);
            if(matrix[c][d] == 0)
            counter ++ ;
        }
    }

    printf("The enterd matrix is :\n");
    for(c =0;c<m;c++)
    {
        for(d = 0;d<n;d++)
        {
            printf("%d ",matrix[c][d]);
        }
        printf("\n");
    }

    if(counter > (m*n)/2)
     printf("The entered matrix is a sparse matrix\n");
    else
     printf("The entered matrix not is a sparse matrix\n");

    return 0;
}