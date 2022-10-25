#include<stdio.h>

void main()
{
int upper=0,lower=0,i=0;

char ch[50];


printf("Enter a string :");
fgets(ch, sizeof(ch), stdin);

while(ch[i]!='\0')
{
 if(ch[i]>='A' && ch[i]<='z')
    upper++;
 if(ch[i]>='a' && ch[i]<='z')
    lower++;
 i++;
}

printf("\nUppercase Letters are: %d",upper);
printf("\nLowercase Letters are: %d\n",lower);
}
