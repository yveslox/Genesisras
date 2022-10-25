#include<stdio.h>

enum colors{red, green, blue};

int main()
{
 enum colors c1, c2;
 
 int d;
 
 d = c2 - c1;
 printf("Differnece = %d\n",d);
 
 if(c1 < c2)
  printf("Red comes before green.\n");
 else
 printf("Green comes before red.\n");
 return 0;
}
