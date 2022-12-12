#include<stdio.h>


int main()
{
int a[50],size,i,big,small;

printf("Enter the size of array : ");
scanf("%d",&size);

printf("Enter %d elements array\n",size);

for(i = 0;i<size;i++)
scanf("%d",&a[i]);

big =a[0];

for(i=1;i<size;i++)
{
    if(big <a[i])
    {
        big = a[i];
    }
}
printf("The largest element is %d\n",big);


small= a[0];

for(i=1;i<size;i++)
{
    if(small > a[i])
    {
        small = a[i];
    }
}
printf("The smallest element is %d\n",small);

printf("\n");
return 0;
}