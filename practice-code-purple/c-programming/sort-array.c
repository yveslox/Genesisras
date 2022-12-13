#include<stdio.h>

void sorting(int *x,int y);

int main()
{
int a[20],i,c,n;

printf("Enter number of elements you want to sort : ");
scanf("%d",&n);


for(i = 0;i<n;i++)
scanf("%d",&a[i]);

sorting(a,n);
printf("After sorting : ");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}

printf("\n");
return 0;
}

void sorting(int *x,int y)
{
    int i,j,temp;
    for(i =1;i<=y-1;i++)
    {
        for(j = 0;j<y-i;j++)
        {
            if((*x+j) > *(x +j+1))
            {
                temp = *(x +j);
                *(x +j) = *(x +j+1);
                *(x+j+1) = temp;
            }
        }
    }
}