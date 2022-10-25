#include<stdio.h>
#include<math.h>

int main()
{
long i,k;

printf("Enter two integers:\n");
scanf("%ld %ld",&i,&k);


printf("Before swapping\n i= %ld\n,k= %ld\n",i,k);

i=i ^ k;
k=i ^ k;
i=i ^ k;


printf("After swapping\n");
printf("i:%ld\nk:%ld\n",i,k);

return 0;
}
