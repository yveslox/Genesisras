#include<stdio.h>
#include<math.h>

int main()
{
 int num = 10;
 
 printf("Num : %d\n",num);
 
 num += 10;
 printf("Num += 10 : %d\n",num);
 
 num -= 5;
 printf("Num -= 5 : %d\n",num);

 num *= 2;
 printf("Num *= 2 : %d\n",num);

 num /= 3;
 printf("Num /= 3 : %d\n",num);

 num %= 3;
 printf("Num %= 3 : %d\n",num);

return 0;
}
