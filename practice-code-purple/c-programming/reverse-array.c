#include<stdio.h>


int main()
{
int c,d,n,a[100],b[100];

printf("Enter number of elements in array : ");
scanf("%d",&n);

printf("Enter %d elements\n",n);

for(c = 0;c<n;c++)
scanf("%d",&a[c]);

for(c =n-1,d =0 ;c>=0;c--,d++)
b[d] = a[c];

for(c =0;c<n;c++)
a[c] = b[c];

printf("Resultant array is : ");
for(c =0;c<n;c++)
printf("%d ",a[c]);

printf("\n");
return 0;
}