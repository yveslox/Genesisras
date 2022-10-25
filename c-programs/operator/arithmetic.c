#include<stdio.h>

int main()
{
 int a =2,b =3;
 int sum, sub,nul,rem,idiv;
 
 float rdiv;
 
 sum = a + b;
 sub = a - b;
 nul = a * b;
 idiv = a / b;
 rem = a % b;
 rdiv =(float)a/(float)b;
 
 printf("Sum = %d\n",sum);
 printf("Sub = %d\n",sub);
 printf("Nul = %d\n",nul);
 printf("idiv = %d\n",idiv);
 printf("rem = %d\n",rem);
 printf("rdiv = %f\n",rdiv);
}
