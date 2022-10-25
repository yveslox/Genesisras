#include<stdio.h>
#include<curses.h>
//#include<conio.h>

int main(int argc, char* argv[])
{
 printf("The size of int is :\t");
 printf("%ld bytes. \n",sizeof(int));

 printf("The size of short int is :\t");
 printf("%ld bytes. \n",sizeof(short));

 printf("The size of long int is :\t");
 printf("%ld bytes. \n",sizeof(long));

 printf("The size of char is :\t");
 printf("%ld bytes. \n",sizeof(char));

 printf("The size of float is :\t");
 printf("%ld bytes. \n",sizeof(float));
 
 printf("The size of double is :\t");
 printf("%ld bytes. \n",sizeof(double));

return 0;
}
