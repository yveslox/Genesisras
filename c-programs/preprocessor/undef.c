#include<stdio.h>

#define VAL 40

#ifdef VAL 
   #undef VAL
#endif
#define VAL 50

int main()
{
 printf("Value = %d\n",VAL);
 return 0;
}
