#include<stdio.h>

int main()
{
    
    char aa[100],bb[100];

        printf("Enter the first string : \n");
        fgets(aa,99,stdin);

        printf("Enter the second string to be concatenate : \n");
        fgets(bb,99,stdin);
     
     char *a = aa;

     char *b = bb;

     while(*a)
     {
        a++;
     }

     while(*b)
     {
        *a = *b;
        b++;
        a++;
     }

     *a ='\0';

    printf("The string after concatenation is : %s\n",aa);

    return 0;
}