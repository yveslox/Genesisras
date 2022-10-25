#include<stdio.h>

#if (!defined(USA) || !defined(IND))
  // #error ERROR: NO_CURRENCY rate is specified.
#endif

int main()
{
 int amt;
 
 amt = 1000;
 
 printf("Amount : %d\n",amt);
 
 return 0;
} 
