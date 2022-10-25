#include<stdio.h>

void main()
{
char arr[100],copy[100];

int len=0,i;

printf("Enter the string :");
fflush(stdin);

fgets(arr,sizeof(arr),stdin);

while(arr[len]!='\0')
{
 len++;
}

for(i=0;i<=len;i++)
{
 copy[i]=arr[i];
}
printf("Copy String:");
puts(copy);
}
