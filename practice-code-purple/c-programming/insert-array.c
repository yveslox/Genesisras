#include<stdio.h>


int main()
{
int array[100],position,c,n,value;

printf("Enter number of elements in array : ");
scanf("%d",&n);

printf("Enter %d elements\n",n);

for(c = 0;c<n;c++)
scanf("%d",&array[c]);

printf("Enter the location where you want to insert new element : ");
scanf("%d",&position);

printf("Enter the value to insert : ");
scanf("%d",&value);

for(c =n-1;c>= position-1;c--)
array[c+1] = array[c];

array[position - 1] = value;

printf("Resultant array is : ");
for(c =0;c<=n;c++)
printf("%d ",array[c]);

printf("\n");
return 0;
}