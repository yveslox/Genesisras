#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[2][2],i,j;
    long determinant;

    printf("Enter the 4 elements of the array :\n");
    for(i =0;i<2;i++)
    for(j =0;j<2;j++)
    scanf("%d",&a[i][j]);

    printf("The entered matrix is :\n");
    for(i =0;i<2;i++)
    {
        for(j = 0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    determinant = a[0][0] * a[1][1] - a[1][0]*a[0][1];

    printf("Determinant of 2x2 matrix is : %d - %d = %ld\n",a[0][0]*a[1][1],a[1][0]*a[0][1],determinant);
     
    return 0;
}